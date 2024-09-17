#include<stdio.h>

int main(){
    int a, b, c, i;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a > b) i = b;
    else i = a;

    if (i > c) printf("%d", c);
        else printf("%d", i);

    return 0;

}
