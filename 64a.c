#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %x\n", a&b, (unsigned char)a&b);
    printf("%d %x\n", a|b, (unsigned char)a|b);
    printf("%d %x\n", a^b, (unsigned char)a^b);
    printf("%d %x\n", ~a, (unsigned char)~a);
    printf("%d %x\n", a << 2, (unsigned char)a << 2);
    printf("%d %x\n", a >> 2, (unsigned char)a >> 2);
    return 0;
}
