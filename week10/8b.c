
#include <stdio.h>

void OddSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] % 2 != 0 && a[i] < a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    OddSort(arr, N);

    for (int i = 0; i < N; i++) {
        printf("%5d", arr[i]);
    }

    return 0;
}
