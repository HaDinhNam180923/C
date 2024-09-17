#include <stdio.h>

int main()
{
    int x, y;
    x = 4;
    y = x++ + 5;
    printf("%d\n", x);
    printf("%d\n", y);
    x = 4;
    y = ++x + 5;
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}
