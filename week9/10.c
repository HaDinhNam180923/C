#include <stdio.h>

long salary(int hours) {
    const int baseHours = 40;
    const long baseSalaryPerHour = 150000;
    const long overtimeMultiplier = 1.5;
    const int minHours = 10;
    const int maxHours = 65;

    if (hours < minHours || hours > maxHours) {
        return -1;
    }

    long totalSalary = 0;

    if (hours > baseHours) {
        totalSalary = baseHours * baseSalaryPerHour + (hours - baseHours) * baseSalaryPerHour * 1.5;
    } else {
        totalSalary += hours * baseSalaryPerHour;
    }

    return totalSalary;
}

int main() {
    int hours;
    scanf("%d", &hours);

    long totalSalary = salary(hours);

    if (totalSalary != -1) {
        printf("%ld\n", totalSalary);
    } else {
        printf("%d", -1);
    }

    return 0;
}
