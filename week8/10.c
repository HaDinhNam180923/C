#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool kiem_tra_palindrome(int N) {
    char str[20];
    sprintf(str, "%d", N);

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    scanf("%d", &N);

    if (kiem_tra_palindrome(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
