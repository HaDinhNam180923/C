#include <stdio.h>

#define MAX_PRODUCTS 10
#define MAX_LENGTH 81

int main() {
    int n;
    char products[MAX_PRODUCTS][MAX_LENGTH];
    char query[MAX_LENGTH];

    // Đọc số lượng sản phẩm
    scanf("%d%*c", &n); // %*c để bỏ qua ký tự newline sau số nguyên

    // Đọc danh sách sản phẩm
    for (int i = 0; i < n; i++) {
        scanf("%80[^\n]%*c", products[i]); // Đọc một dòng cho đến khi gặp ký tự newline
    }

    // Đọc mã sản phẩm cần tìm
    scanf("%80[^\n]%*c", query); // Đọc một dòng cho đến khi gặp ký tự newline

    // Tìm và in ra mô tả sản phẩm
    int found = 0;
    for (int i = 0; i < n && !found; i++) {
        char *productPtr = products[i];
        char *queryPtr = query;
        while (*productPtr != '\0' && *queryPtr != '\0' && *productPtr == *queryPtr) {
            productPtr++;
            queryPtr++;
        }
        if (*queryPtr == '\0') {
            printf("%s\n", products[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("NOT FOUND\n");
    }

    return 0;
}
