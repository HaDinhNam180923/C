#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a < 18) printf("TRE EM");
    if (a >= 18 && a < 65) printf("TRUONG THANH");
    if (a >= 65) printf("NGUOI GIA");

    return 0;
}
