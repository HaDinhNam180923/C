#include <stdio.h>

int longest_zero_sequence(int a[], int n) {
    int max_length = 0, current_length = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            current_length++;
            if (current_length > max_length) {
                max_length = current_length;
            }
        } else {
            current_length = 0;
        }
    }
    return max_length;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[10];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", longest_zero_sequence(arr, N));

    return 0;
}
