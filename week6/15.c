#include <stdio.h>

int main() {
    char a;
    int n, i;
    scanf("%c\n%d\n%d", &a, &n, &i);
    if (a == 'L') {
        if (n == 1 && i == 0) printf("%d", 109000);
        if (n == 2 && i == 0) printf("%d", 89000);
        if (n == 1 && i == 1) printf("%d", 109000-13000);
        if (n == 2 && i == 1) printf("%d", 89000-13000);
    }
    if (a == 'N') {
        if (n == 1 && i == 0) printf("%d", 109000*75/100);
        if (n == 2 && i == 0) printf("%d", 89000*75/100);
        if (n == 1 && i == 1) printf("%d", 109000*75/100-13000);
        if (n == 2 && i == 1) printf("%d", 89000*75/100-13000);
    }
    if (a == 'S') {
        if (n == 1 && i == 0) printf("%d", 109000*90/100);
        if (n == 2 && i == 0) printf("%d", 890003*90/100);
        if (n == 1 && i == 1) printf("%d", 109000*90/100-13000);
        if (n == 2 && i == 1) printf("%d", 89000*90/100-13000);
    }
    if (a == 'G') {
        if (n == 1 && i == 0) printf("%d", 109000*85/100);
        if (n == 2 && i == 0) printf("%d", 89000*85/100);
        if (n == 1 && i == 1) printf("%d", 109000*85/100-13000);
        if (n == 2 && i == 1) printf("%d", 89000*85/100-13000);
    }

  return 0;
}
