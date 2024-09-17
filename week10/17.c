
#include <stdio.h>
#include <math.h>

float sigmoid(float x) {
    return 1 / (1 + exp(-x));
}

float g(float x1, float x2) {
    float result;
    float w1 = 2, w2 = 4, b = -5; // Các giá trị đã được điền
    result = sigmoid(w1 * x1 + w2 * x2 + b);
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
