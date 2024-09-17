#include <stdio.h>
#include <math.h>

int convertToDecimal(char binary[]) {
    int len = strlen(binary);
    int decimal = 0;

    for (int i = len - 1; i >= 0; i--) {
        int digit = binary[i] - '0';
        decimal += digit * pow(2, len - i - 1);
    }
    return decimal;
}

int convertToOctal(int decimal) {
    int octal = 0, i = 1;

    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}

int main() {
    char binary[20];
    scanf("%s", binary);

    int decimal = convertToDecimal(binary);
    int octal = convertToOctal(decimal);

    printf("%d\n", octal);

    return 0;
}
