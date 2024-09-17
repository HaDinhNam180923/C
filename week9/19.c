#include <stdio.h>

void printPyramid(int n) {
    int i, j, k;
    for(i=1; i<=n; i++) {
        for(j=n; j>i; j--)
            printf("  ");
        for(k=1; k<=i; k++)
            printf("%c ", 'A' + k - 1);
        for(k=i-1; k>=1; k--)
            printf("%c ", 'A' + k - 1);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPyramid(n);
    return 0;
}
