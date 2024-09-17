#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    int n;

    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%d", &n);

    float T = sqrt(pow(x, 5) + exp(log(fabs(y)) + 1)) + (1 + sin(x)) / (cos(n * x) + sqrt(2 + fabs(n)));

    printf("%.2f\n", T);

    return 0;
}
