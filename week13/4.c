#include <stdio.h>
#include <ctype.h>
#include <string.h>

int testNum(char code[]) {
    // Kiểm tra độ dài của mã khách hàng
    if (strlen(code) != 7) {
        return 0;
    }

    // Kiểm tra 3 ký tự đầu là chữ cái
    for (int i = 0; i < 3; i++) {
        if (!isalpha(code[i])) {
            return 0;
        }
    }

    // Kiểm tra 4 ký tự cuối là chữ số
    for (int i = 3; i < 7; i++) {
        if (!isdigit(code[i])) {
            return 0;
        }
    }

    // Nếu tất cả các điều kiện đều thỏa mãn, mã khách hàng hợp lệ
    return 1;
}

int main() {
    char customerCode[100];

    // Đọc mã khách hàng từ đầu vào
    scanf("%s", customerCode);

    // Kiểm tra mã khách hàng và in kết quả
    if (testNum(customerCode)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
