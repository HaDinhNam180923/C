#include <stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N, i, j;
    int A[10], count[10] = {0};

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    sort(A, N);

    for (i = 0; i < N; i++) {
        count[i] = 1;
        for (j = i + 1; j < N; j++) {
            if (A[i] == A[j]) {
                count[i]++;
                A[j] = -1809;
            }
        }
    }
    for (i = 0; i < N; i++) {
        if (A[i] != -1809) {
            printf("%d %d\n", A[i], count[i]);
        }
    }

    return 0;
}
