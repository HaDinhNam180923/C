#include <stdio.h>
#include <math.h>


double factorial(int n) {
    if (n == 0)
        return 1;
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    double X;
    int N;
    scanf("%lf", &X);
    scanf("%d", &N);

    double epsilon = pow(10, -N);
    double S = 0;
    double term = 1;
    int i = 1;

    while (fabs(term) >= epsilon) {
        S += term;
        term = pow(X, i) / factorial(i);
        i++;
    }

    printf("%.2lf\n", S+term);

    return 0;
}
