#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N;
    scanf("%d", &N);

    printf("%d", fibonacci(N+1));
    return 0;
}
