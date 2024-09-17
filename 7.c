#include <stdio.h>

void incomeplus(long *current, int year) {
    if (year > 3) {
        *current += 3000000;
    }
}

int main() {
    long current_income;
    int working_years;

    scanf("%ld %d", &current_income, &working_years);

    incomeplus(&current_income, working_years);

    printf("%ld\n", current_income);

    return 0;
}
