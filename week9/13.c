#include <stdio.h>

int DigitAllSame(int n) {
    int lastDigit = n % 10; // Lấy chữ số cuối cùng của số N
    int isEven = lastDigit % 2 == 0; // Kiểm tra xem chữ số cuối cùng có phải là số chẵn không

    n /= 10; // Bỏ đi chữ số cuối cùng của số N

    while (n > 0) {
        int digit = n % 10;
        if ((digit % 2 == 0) != isEven) {
            return 0; // Trả về 0 nếu có ít nhất một chữ số khác biệt
        }
        n /= 10; // Bỏ đi chữ số cuối cùng
    }

    return 1; // Trả về 1 nếu tất cả các chữ số giống nhau về tính chẵn lẻ
}

int main() {
    int N;
    scanf("%d", &N);

    if (DigitAllSame(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
