#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %x\n", a&b, a&b);
    printf("%d %x\n", a|b, a|b);
    printf("%d %x\n", a^b, a^b);
    printf("%d %x\n", ~a, ~a);
    printf("%d %x\n", a << 2, a << 2);
    printf("%d %x\n", a >> 2, a >> 2);
    return 0;
}
