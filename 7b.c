#include <stdio.h>

void count(int n, int *nb) {
    *nb = 0; // Khởi tạo số ước số

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            (*nb)++; // Tăng số ước số lên 1
        }
    }
}

int main() {
    int n, nb;
    scanf("%d", &n);

    count(n, &nb);

    printf("%d\n", nb-1);

    return 0;
}
