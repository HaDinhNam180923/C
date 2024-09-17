#include <stdio.h>

int highestCommonFactor(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int hcf = highestCommonFactor(a, b);
    printf("%d\n", hcf);

    return 0;
}
