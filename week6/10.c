#include <stdio.h>
#include <math.h>

void giai_phuong_trinh_bac_hai(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("VO SO NGHIEM\n");
            } else {
                printf("VO NGHIEM\n");
            }
        } else {
            printf("%.2f\n", -c / b);
        }
    } else {
        if (delta < 0) {
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-delta) / (2 * a);
            printf("%.2f + j%.2f\n", realPart, imaginaryPart);
            printf("%.2f - j%.2f\n", realPart, imaginaryPart);
        } else if (delta == 0) {
            printf("%.2f\n", -b / (2 * a));
        } else {
            float x1 = (-b - sqrt(delta)) / (2 * a);
            float x2 = (-b + sqrt(delta)) / (2 * a);
            printf("%.2f\n%.2f\n", (x1 < x2) ? x1 : x2, (x1 < x2) ? x2 : x1);
        }
    }
}

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    giai_phuong_trinh_bac_hai(a, b, c);

    return 0;
}

