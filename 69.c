#include <stdio.h>

int main() {
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);

    (a == 0) ? (b == 0 ? printf("VO SO NGHIEM") : printf("VO NGHIEM")) : printf("%.2f", -b/a);

    return 0;
}
