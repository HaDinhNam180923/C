#include <stdio.h>
#include <math.h>
#include <string.h>

int chuyen_sang_thap_phan(char binary[]) {
    int len = strlen(binary);
    int decimal = 0;
    int exponent = len - 1;

    for (int i = 0; i < len; i++) {
        int digit = binary[i] - '0';
        decimal += digit * pow(2, exponent);
        exponent--;
    }

    return decimal;
}

int main() {
    char binary[100];
    scanf("%s", binary);

    int decimal = chuyen_sang_thap_phan(binary);

    printf("%d\n", decimal);

    return 0;
}
