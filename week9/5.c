#include <stdio.h>
int a, b;
void swap() {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
int main() {
    scanf("%d%d", &a, &b);
    swap(a, b);
    printf("%d\n%d", a, b);
    return 0;
}
