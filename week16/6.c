#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ATHELETES 20
#define MAX_NAME_LENGTH 31
#define MAX_NATION_LENGTH 4

typedef struct {
    int id;
    char nation[MAX_NATION_LENGTH];
    char name[MAX_NAME_LENGTH];
    float results[3];
    float finalResult;
} Athlete;

Athlete athletes[MAX_ATHELETES];
int athleteCount = 0;

void calculateFinalResult(Athlete *athlete) {
    float maxResult = 0.0;
    for (int i = 0; i < 3; i++) {
        if (athlete->results[i] > maxResult) {
            maxResult = athlete->results[i];
        }
    }
    athlete->finalResult = maxResult;
}

void sortAthletes() {
    for (int i = 0; i < athleteCount - 1; i++) {
        for (int j = i + 1; j < athleteCount; j++) {
            if (athletes[i].finalResult < athletes[j].finalResult) {
                Athlete temp = athletes[i];
                athletes[i] = athletes[j];
                athletes[j] = temp;
            }
        }
    }
}

void printAthlete(Athlete athlete) {
    printf("%d %s %s", athlete.id, athlete.nation, athlete.name);
    for (int i = 0; i < 3; i++) {
        if (athlete.results[i] == 0.0) {
            printf(" -");
        } else {
            printf(" %.2f", athlete.results[i]);
        }
    }
    printf(" %.2f\n", athlete.finalResult);
}

int main() {
    char command[256];

    while (fgets(command, sizeof(command), stdin)) {
        if (strncmp(command, ">>>INPUT SO_LUONG_VAN_DONG_VIEN", 31) == 0) {
            sscanf(command + 32, "%d", &athleteCount);
            if (athleteCount < 1 || athleteCount > 20) {
                fprintf(stderr, "Invalid number of athletes. Must be between 1 and 20.\n");
                return 1;
            }
        } else if (strncmp(command, ">>>INPUT THONG_TIN_VAN_DONG_VIEN", 32) == 0) {
            if (athleteCount == 0) {
                fprintf(stderr, "Please enter the number of athletes first.\n");
                return 1;
            }
            int id = athleteCount - 1;
            athletes[id].id = id + 1;
            sscanf(command + 33, "%3s %30[^\n]", athletes[id].nation, athletes[id].name);
        } else if (strncmp(command, ">>>INPUT KET_QUA_THI_DAU", 24) == 0) {
            int id;
            char round[3];
            float result;
            sscanf(command + 25, "%d %2s %f", &id, round, &result);
            if (id < 1 || id > athleteCount) {
                fprintf(stderr, "Invalid athlete ID.\n");
                continue;
            }
            if (result < 0 || result >= 20) {
                fprintf(stderr, "Invalid result. Must be a non-negative number less than 20.\n");
                continue;
            }
            int index = id - 1;
            if (strcmp(round, "R1") == 0) {
                athletes[index].results[0] = result;
            } else if (strcmp(round, "R2") == 0) {
                athletes[index].results[1] = result;
            } else if (strcmp(round, "R3") == 0) {
                athletes[index].results[2] = result;
            } else {
                fprintf(stderr, "Invalid round.\n");
            }
        } else if (strncmp(command, ">>>OUTPUT QUOC_GIA", 18) == 0) {
            char nation[MAX_NATION_LENGTH];
            sscanf(command + 19, "%3s", nation);
            int found = 0;
            for (int i = 0; i < athleteCount; i++) {
                if (strcmp(athletes[i].nation, nation) == 0) {
                    printAthlete(athletes[i]);
                    found = 1;
                }
            }
            if (!found) {
                printf("KHONG TIM THAY VAN DONG VIEN CUA QUOC GIA %s\n", nation);
            }
        } else if (strncmp(command, ">>>OUTPUT HO_TEN", 16) == 0) {
            char name[MAX_NAME_LENGTH];
            sscanf(command + 17, "%30[^\n]", name);
            int found = 0;
            for (int i = 0; i < athleteCount; i++) {
                if (strstr(athletes[i].name, name) != NULL) {
                    printAthlete(athletes[i]);
                    found = 1;
                }
            }
            if (!found) {
                printf("KHONG TIM THAY VAN DONG VIEN %s\n", name);
            }
        } else if (strncmp(command, ">>>OUTPUT TONG_KET", 18) == 0) {
            for (int i = 0; i < athleteCount; i++) {
                calculateFinalResult(&athletes[i]);
            }
            sortAthletes();
            for (int i = 0; i < athleteCount; i++) {
                printAthlete(athletes[i]);
            }
        }
    }

    return 0;
}
