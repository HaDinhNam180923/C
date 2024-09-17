#include <stdio.h>

int main() {
    int A[20];
    int N, i;
    int sum = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 1; i < N - 1; i++) {
        if (A[i] > A[i - 1] && A[i] > A[i + 1]) {
            sum += A[i];
        }
    }

    printf("%d\n", sum);

    return 0;
}
