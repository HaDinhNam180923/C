#include <stdio.h>

int count_zeros(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", count_zeros(arr, N));

    return 0;
}
