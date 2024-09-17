#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    if (is_prime(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
