#include <stdio.h>

int main() {
    double total_credit = 0;
    double total_weighted_score = 0;
    double score, credit;

    while (1) {
        scanf("%lf", &score);
        if (score == -1) {
            break;
        }
        scanf("%lf", &credit);

        if (score == -1) {
            break;
        }

        total_credit += credit;

        // Quy đổi điểm từ hệ 10 sang hệ 4
        double weighted_score;
        if (score >= 8.5) {
            weighted_score = 4.0;
        } else if (score >= 8.0) {
            weighted_score = 3.5;
        } else if (score >= 7.0) {
            weighted_score = 3.0;
        } else if (score >= 6.5) {
            weighted_score = 2.5;
        } else if (score >= 5.5) {
            weighted_score = 2.0;
        } else if (score >= 5.0) {
            weighted_score = 1.5;
        } else if (score >= 4.0) {
            weighted_score = 1.0;
        } else {
            weighted_score = 0.0;
        }

        total_weighted_score += weighted_score * credit;
    }

    // Tính GPA
    double gpa = total_weighted_score / total_credit;

    // Làm tròn kết quả tới 2 chữ số phần thập phân
    printf("%.2lf\n", gpa);

    return 0;
}
