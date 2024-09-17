#include <stdio.h>
#include <math.h>

float mySin(float x, int N) {
    float epsilon = pow(10, -N);
    float result = 0.0;
    float term = x;
    int n = 1;

    while (fabs(term) >= epsilon) {
        result += term;
        term = -term * x * x / ((2 * n) * (2 * n + 1));
        n++;
    }

    return result;
}

int main() {
    float x;
    int N;
    scanf("%f", &x);
    scanf("%d", &N);

    float sin_x = mySin(x, N);
    printf("sin(%.2f) = %.2f\n", x, sin_x);

    return 0;
}
