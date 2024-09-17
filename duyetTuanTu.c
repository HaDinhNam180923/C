#include<stdio.h>
#define MAX 100
int b[MAX];
int sizeb;

int lineraSearch(int a[], int size, int x){
    int i;
    for(i = 0; i < size; i++){
        if (a[i] == x) return i;
        return -1;
    }
}

void lineraSearch2(int a[], int size, int x){
    int i, j;
    int *p;

    for(i = 0; i < size; i++)
        if (a[i] == x) {
            b[j] = i;
            sizeb = j++;
        }
    
}
int main(){
    int a[] = {10, 5, 6, 3, 9};
    int sizeb = sizeof(a)/sizeof(a[0]);
    
    lineraSearch2(a, sizeb, 5);
    for(int i = 0; i<sizeb; i++){
        printf("%d", b[i]);
    }
    return 0;
}