#include <stdio.h>
#define print(x) printf("%d ", x)
int x;
int Q(int z)
{
    z += x;
    return z;
}

void P(int *y)
{
    int x = *y + 2;
    x += Q(x);
    *y = x - 1;
}
int main()
{
    x = 25;
    P(&x);
    print(x);
    return 0;
}
