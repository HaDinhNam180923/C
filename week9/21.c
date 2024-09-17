#include <stdio.h>

int lowestCommonMultiple(int a, int b) {
    int lcm = (a * b) / highestCommonFactor(a, b);
    return lcm;
}

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

    int lcm = lowestCommonMultiple(a, b);
    printf("%d\n", lcm);

    return 0;
}
