#include <stdio.h>

void chuyen_sang_nhi_phan(int N) {
    if (N == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;

    while (N > 0) {
        binary[i] = N % 2;
        N = N / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    chuyen_sang_nhi_phan(N);
    printf("\n");

    return 0;
}
