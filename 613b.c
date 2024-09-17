#include <stdio.h>
#include <math.h>


#define PI 3.14159

int main() {
    float si, mu, x1, x2, fx1, fx2;
    scanf("%f%f", &mu, &si);
    x1 = si + mu;
    x2 = 2*si + mu;
    fx1 = (1/(si*sqrt(2*PI))*exp(-0.5*pow((x1-mu), 2)/pow(si, 2)));
    fx2 = (1/(si*sqrt(2*PI))*exp(-0.5*pow((x2-mu), 2)/pow(si, 2)));
    printf("%.2f\n%.2f", fx1, fx2);
    return 0;
}
