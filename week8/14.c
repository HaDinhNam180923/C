#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    while (fibonacci(i) < N) {
        i++;
    }

    int fib_max = fibonacci(i - 1);
    printf("%d\n", fib_max);

    return 0;
}
