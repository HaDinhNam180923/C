#include<stdio.h>

int main(){
    float a, b, c;
    char d;
    scanf("%c\n%f", &d, &a);
    if (d == 'C') {b = 0.70; c = 2.50;}
    if (d == 'B') {b = 1.50; c = 2.00;}
    if (d == 'T') {b = 2.50; c = 3.25;}
    if (a > 2) printf("%.2f", (2*b) + (((a-2)*c)));
        else printf("%.2f", a*b);

    return 0;
}
