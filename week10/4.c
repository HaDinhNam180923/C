#include <stdio.h>
#include <limits.h>

int main() {
    int A[20];
    int N, i;
    int sumOdd = 0;
    int minEven = INT_MAX;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[i] % 2 != 0) {
            sumOdd += A[i];
        } else if (A[i] < minEven) {
            minEven = A[i];
        }
    }

    printf("%d\n", sumOdd);
    if (minEven == INT_MAX) {
        printf("Không có số chẵn trong mảng\n");
    } else {
        printf("%d\n", minEven);
    }

    return 0;
}
