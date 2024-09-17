#include <stdio.h>

int find(int arr[], int n, int Q) {
    int k=0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == Q) {
                k++;
            }
        }
    }
    return k;
}

int main() {
    int n, Q;
    printf("Nhap so luong phan tu trong day: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua day:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap so nguyen Q: ");
    scanf("%d", &Q);

    
    printf("%d", find(arr, n, Q));

    return 0;
}
