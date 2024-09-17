#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_LINES 100000

struct Submission {
    char user_id[11];
    char problem_id[4];
    struct tm time_point;
    char status[4];
    int point;
};

struct QueryResult {
    int total_number_submissions;
    int number_error_submission;
    int number_error_submission_of_user;
    int total_point_of_user;
    int number_submission_period;
};

void parse_time(const char *time_str, struct tm *time_info) {
    strptime(time_str, "%H:%M:%S", time_info);
}

void process_contest(struct Submission *submissions, int *num_submissions) {
    *num_submissions = 0;
    char line[50];
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == '#') {
            break;
        }

        sscanf(line, "%s %s %d:%d:%d %s %d",
               submissions[*num_submissions].user_id,
               submissions[*num_submissions].problem_id,
               &submissions[*num_submissions].time_point.tm_hour,
               &submissions[*num_submissions].time_point.tm_min,
               &submissions[*num_submissions].time_point.tm_sec,
               submissions[*num_submissions].status,
               &submissions[*num_submissions].point);

        (*num_submissions)++;
    }
}

void execute_queries(struct Submission *submissions, int num_submissions) {
    struct QueryResult result = {0, 0, 0, 0, 0};
    char query[50];

    while (fgets(query, sizeof(query), stdin)) {
        if (query[0] == '#') {
            break;
        }

        if (strcmp(query, "?total_number_submissions\n") == 0) {
            result.total_number_submissions = num_submissions;
        } else if (strcmp(query, "?number_error_submision\n") == 0) {
            for (int i = 0; i < num_submissions; ++i) {
                if (strcmp(submissions[i].status, "ERR") == 0) {
                    result.number_error_submission++;
                }
            }
        } else if (sscanf(query, "?number_error_submision_of_user %s\n", result.user_id) == 1) {
            for (int i = 0; i < num_submissions; ++i) {
                if (strcmp(submissions[i].user_id, result.user_id) == 0 &&
                    strcmp(submissions[i].status, "ERR") == 0) {
                    result.number_error_submission_of_user++;
                }
            }
        } else if (sscanf(query, "?total_point_of_user %s\n", result.user_id) == 1) {
            for (int i = 0; i < num_submissions; ++i) {
                if (strcmp(submissions[i].user_id, result.user_id) == 0) {
                    result.total_point_of_user = result.total_point_of_user > submissions[i].point
                                                    ? result.total_point_of_user
                                                    : submissions[i].point;
                }
            }
        } else if (sscanf(query, "?number_submission_period %d:%d:%d %d:%d:%d\n",
                          &result.from_hour, &result.from_min, &result.from_sec,
                          &result.to_hour, &result.to_min, &result.to_sec) == 6) {
            struct tm from_time = {0};
            struct tm to_time = {0};
            from_time.tm_hour = result.from_hour;
            from_time.tm_min = result.from_min;
            from_time.tm_sec = result.from_sec;
            to_time.tm_hour = result.to_hour;
            to_time.tm_min = result.to_min;
            to_time.tm_sec = result.to_sec;

            for (int i = 0; i < num_submissions; ++i) {
                if (mktime(&from_time) <= mktime(&submissions[i].time_point) &&
                    mktime(&submissions[i].time_point) <= mktime(&to_time)) {
                    result.number_submission_period++;
                }
            }
        }
    }

    // Print results
    printf("%d\n%d\n%d\n%d\n%d\n",
           result.total_number_submissions,
           result.number_error_submission,
           result.number_error_submission_of_user,
           result.total_point_of_user,
           result.number_submission_period);
}

int main() {
    struct Submission submissions[MAX_LINES];
    int num_submissions;

    process_contest(submissions, &num_submissions);
    execute_queries(submissions, num_submissions);

    return 0;
}
