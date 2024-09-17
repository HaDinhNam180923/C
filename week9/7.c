#include <stdio.h>

float kineticEnergy(float m, float v) {
        float ke = 0.5 * m * v * v;
        return ke;
}

int main() {
    float m, v;
    while (scanf("%f %f", &m, &v) != EOF) {
        if (m > 0 && v > 0) {
            float ke = kineticEnergy(m, v);
            printf("%.2f\n", ke);
            break;
        } else {
            continue;
        }
    }

    return 0;
}
