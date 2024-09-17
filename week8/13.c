#include <stdio.h>
#include <math.h>

// Chuyển đổi từ hệ cơ số 8 sang hệ cơ số 10
int chuyen_sang_thap_phan(char octal[]) {
    int thap_phan = 0;
    int len = 0;
    for (int i = 0; octal[i] != '\0'; i++) {
        len++;
    }
    for (int i = 0; octal[i] != '\0'; i++) {
        len--;
        thap_phan += (octal[i] - '0') * pow(8, len);
    }
    return thap_phan;
}

// Chuyển từ hệ cơ số 10 sang hệ cơ số 2
void chuyen_sang_nhi_phan(int thap_phan, char binary[]) {
    if (thap_phan == 0) {
        strcpy(binary, "0");
        return;
    }
    int i = 0;
    while (thap_phan > 0) {
        binary[i] = (thap_phan % 2) + '0';
        thap_phan /= 2;
        i++;
    }
    binary[i] = '\0';
    // Đảo chuỗi nhị phân
    int len = strlen(binary);
    for (int j = 0; j < len / 2; j++) {
        char temp = binary[j];
        binary[j] = binary[len - j - 1];
        binary[len - j - 1] = temp;
    }
}

int main() {
    char octal[20];
    scanf("%s", octal);

    int thap_phan = chuyen_sang_thap_phan(octal);

    char binary[80] = "";
    chuyen_sang_nhi_phan(thap_phan, binary);

    printf("%s\n", binary);

    return 0;
}
