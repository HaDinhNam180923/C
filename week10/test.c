#include <stdio.h>

#define SIZE 10

int main() {
    int multiplicationTable[SIZE][SIZE];
    int m, n;

    // Tạo bảng cửu chương
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j == 9) {
                multiplicationTable[i][j] = (i + 1) * 10;
            } else {
                multiplicationTable[i][j] = (i + 1) * (j + 1);
            }
        }
    }

    // Nhập m và n từ người dùng
    printf("Nhap hai so nguyen m va n (1 <= m <= 10, 1 <= n <= 10): ");
    scanf("%d %d", &m, &n);

    // Kiểm tra giá trị của m và n
    if (m < 1 || m > 10 || n < 1 || n > 10) {
        printf("Gia tri m va n khong hop le!\n");
        return 1;
    }

    // Tìm và in ra giá trị của m x n trong bảng cửu chương
    printf("%d x %d = %d\n", m, n, multiplicationTable[m - 1][n - 1]);

    return 0;
}
