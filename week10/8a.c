#include <stdio.h>

void DesSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int a[10];
    int n, i;


    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    DesSort(a, n);

    for (i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }

    return 0;
}
