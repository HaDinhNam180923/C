#include<stdio.h>

int main(){
    int c;
    scanf("%d", &c);
    switch (c) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("31"); break;
    case 4: case 6: case 9: case 11:  printf("30"); break;
    case 2:  printf("28-29"); break;
    default: printf("hehe\n"); break;
    }

    return 0;
}
