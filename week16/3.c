#include <stdio.h>
#include <stdlib.h>

// Hàm so sánh hai số nguyên (dùng cho hàm qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Hàm đếm số cặp (i, j) thỏa mãn ai + aj = Q
int demCap(int arr[], int n, int Q) {
    int count = 0;
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == Q) {
            count++;
            left++;
            right--;
        } else if (sum < Q) {
            left++;
        } else {
            right--;
        }
    }

    return count;
}

int main() {
    int n, Q;
    scanf("%d %d", &n, &Q);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sắp xếp mảng để tối ưu việc đếm cặp
    qsort(arr, n, sizeof(int), compare);

    // Đếm số cặp thỏa mãn
    int result = demCap(arr, n, Q);
    printf("%d\n", result);

    return 0;
}
