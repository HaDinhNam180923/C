#include <stdio.h>
#include <math.h>

int gptb2(float a, float b, float c, float *x1, float *x2) {
    float delta = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                // Phương trình vô số nghiệm
                return 0;
            } else {
                // Phương trình vô nghiệm
                return 2;
            }
        } else {
            // Phương trình suy biến bậc 1
            *x1 = -c / b;
            return 3;
        }
    } else {
        if (delta < 0) {
            // Phương trình vô nghiệm
            return 2;
        } else if (delta == 0) {
            // Phương trình có nghiệm duy nhất
            *x1 = -b / (2 * a);
            return 0;
        } else {
            // Phương trình có hai nghiệm phân biệt
            *x1 = (-b + sqrt(delta)) / (2 * a);
            *x2 = (-b - sqrt(delta)) / (2 * a);
            return 1;
        }
    }
}

int main() {
    float a, b, c, x1, x2;

    scanf("%f %f %f", &a, &b, &c);

    int result = gptb2(a, b, c, &x1, &x2);

    switch (result) {
        case 0:
            printf("%.2f\n", x1);
            break;
        case 1:
            printf("%.2f %.2f\n", x1, x2);
            break;
        case 2:
            printf("VO NGHIEM\n");
            break;
        case 3:
            printf("SUY BIEN BAC 1\n");
            break;
    }

    return 0;
}
