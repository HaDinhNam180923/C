#include <stdio.h>
#include <math.h>

int main() {
    int i, m, n, k;
    scanf("%d%d%d", &n, &m, &k);
    i = (m>n) ? m : n;
    i = (i>k) ? i : k;
    printf("%d", i);
    return 0;
}
