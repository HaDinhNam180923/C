// Bai 18
#include <stdio.h>
#include <math.h>
float ReLU(float x) {
    if (x >= 0)
        return x;
    else
        return 0;
}

float g(float x1, float x2) {
    float result;
    float w11 = 4, w12 = -3, c1 = 1;
    float w21 = -3, w22 = 4, c2 = 1;
    float w1 = 1, w2 = 1, b = -4;
    float h1, h2, g1, g2;
    h1 = w11 * x1 + w12 * x2 + c1;
    h2 = w21 * x1 + w22 * x2 + c2;
    g1 = ReLU(h1);
    g2 = ReLU(h2);
    result = w1 * g1 + w2 * g2 + b;
    return result;
}
int main() {
    int x1, x2;
    float probs;
    scanf("%d%d", &x1, &x2);
    probs = g(x1, x2);
    if (probs >= 0.5)
        printf("CLASS 1");
    else
        printf("CLASS 0");

    return 0;
}
