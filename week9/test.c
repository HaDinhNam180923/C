#include <math.h>
#include <stdio.h>

double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double power(double base, int exp) {
    double result = 1;
    while(exp) {
        if(exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
    return result;
}

float myArcsin(float x, int M) {
    double epsilon = pow(10, -M);
    double arcsin = 0.0;
    double term;
    int i = 0;

    do {
        term = (factorial(2*i) / (power(4, i) * power(factorial(i), 2) * (2*i+1))) * power(x, 2*i+1);
        arcsin += term;
        i++;
    } while(fabs(term) > epsilon);

    return (float)arcsin;
}

int main() {
    float x;
    int M;
    scanf("%f", &x);
    scanf("%d", &M);
    printf("%.2f\n", myArcsin(x, M));
    return 0;
}
