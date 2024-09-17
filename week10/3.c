#include <stdio.h>

int main() {
    int A[10];
    int N, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (i = N - 1; i >= 0; i--) {
        printf("%5d", A[i]);
    }

    return 0;
}
