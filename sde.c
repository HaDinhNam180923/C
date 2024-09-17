#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("He so: %s a b c\n", argv[0]);
        return 1;
    }


    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);


    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Phýõng tr?nh không có nghi?m th?c.\n");
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Phýõng tr?nh có nghi?m kép: x1 = x2 = %.2lf\n", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phýõng tr?nh có hai nghi?m phân bi?t:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }

    return 0;
}

