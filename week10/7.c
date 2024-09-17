#include <stdio.h>

int compare_arrays(const int arr1[], const int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr1[10], arr2[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr2[i]);
    }

    if (compare_arrays(arr1, arr2, N)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
