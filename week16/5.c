#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n); // Đọc số lượng phần tử của dãy A
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Đọc phần tử thứ i của dãy A
    }

    scanf("%d", &m); // Đọc số lượng phần tử của dãy B
    int b[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]); // Đọc phần tử thứ i của dãy B
    }

    // Trộn dãy A và dãy B theo quy tắc đã cho
    int c[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        c[k++] = a[i++];
        c[k++] = b[j++];
    }
    while (i < n) {
        c[k++] = a[i++];
    }
    while (j < m) {
        c[k++] = b[j++];
    }

    // In dãy C
    for (int i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
