#include<stdio.h>
int main()
{
    //khai bao a
    int a, i, j;
    //nhap du lieu cho a
    do
    {
        printf("nhap chieu cao tam giac: a =");
        scanf("%d",&a);
    }while(a<0);
    // v?ng for dieu khien so hang 
    for( i=1;i<=a;i++)
    {
        // vong for dieu khien cac khoang trong
        for( j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        // vong for de in dau sao
        for( j=1;j<=2*i-1;j++)
        {
            printf("*");
        }        
        printf("\n");
    }

}
