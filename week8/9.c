#include <stdio.h>
#include <math.h>

double tinh_giai_thua(int n) {
    if (n == 0)
        return 1;
    double giai_thua = 1;
    for (int i = 1; i <= n; i++) {
        giai_thua *= i;
    }
    return giai_thua;
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

    do {
        S += term;
        term = pow(-1, i) * pow(X, 2 * i) / tinh_giai_thua(2 * i);
        i++;
    } while (fabs(term) >= epsilon);

    printf("%.2lf\n", S+term);

    return 0;
}
