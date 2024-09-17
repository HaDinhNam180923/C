#include <stdio.h>

int main() {
    int N, i;
    int A[10];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Kiểm tra tính đối xứng
    for (i = 0; i < N / 2; i++) {
        if (A[i] != A[N - i - 1]) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
