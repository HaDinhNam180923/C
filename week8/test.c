#include <stdio.h>
#include <string.h>

// Chuyển một chữ số ở hệ cơ số 8 thành biểu diễn nhị phân 3-bit tương ứng
void chuyen_so(char octal, char binary[]) {
    int digit = octal - '0'; // Chuyển ký tự số thành số nguyên
    int i = 2;

    // Chuyển từng bit của số ở hệ cơ số 8 thành biểu diễn nhị phân
    while (i >= 0) {
        binary[i] = (digit % 2) + '0'; // Lấy phần dư khi chia cho 2 và chuyển thành ký tự số
        digit /= 2; // Chia cho 2 để chuyển sang bit kế tiếp
        i--;
    }
    binary[3] = '\0'; // Kết thúc chuỗi
}

int main() {
    char octal[20];
    printf("Nhập số ở hệ cơ số 8: ");
    scanf("%s", octal);

    char binary[80] = "";
    int i = 0;
    int skip = 1; // Biến này được sử dụng để bỏ qua các số 0 ở đầu

    // Chuyển từng chữ số của số ở hệ cơ số 8 sang nhị phân và gộp vào chuỗi nhị phân
    while (octal[i]) {
        if (skip && octal[i] == '0') {
            i++;
            continue;
        }
        char temp[4]; // Để chứa biểu diễn nhị phân của mỗi chữ số ở hệ cơ số 8
        chuyen_so(octal[i], temp);
        strcat(binary, temp); // Gộp biểu diễn nhị phân vào chuỗi nhị phân
        i++;
        skip = 0; // Đánh dấu rằng đã bắt đầu ghi số nhị phân
    }

    // Kiểm tra nếu chuỗi nhị phân là rỗng thì chuyển thành số 0
    if (strlen(binary) == 0) {
        strcpy(binary, "0");
    }

    printf("Chuỗi nhị phân biểu diễn số ở hệ cơ số 2: %s\n", binary);

    return 0;
}
