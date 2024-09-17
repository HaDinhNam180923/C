#include<stdio.h>

int main(){
    char a, b, c, i;
    scanf("%c\n%c\n%c", &a, &b, &c);
    if(a > b) i = b;
    else i = a;

    if (i > c) printf("%c", c);
        else printf("%c", i);

    return 0;

}
