#include <stdio.h>

int main() {
    int N;
    scanf("%d\n", N);
    for (int i = 0; i < N; i++){
        for (int a = 0; a < 2*i+1; a++) printf("* ");
    }

    return 0;
}
