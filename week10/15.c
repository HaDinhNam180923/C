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
    int N, i, newElement;
    int A[10];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &newElement);

    // Sắp xếp mảng
    sort(A, N);

    // Tìm vị trí phù hợp để chèn phần tử mới
    for (i = 0; i < N; i++) {
        if (A[i] > newElement) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("%d\n", N);
    return 0;
}
