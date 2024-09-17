#include<stdio.h>

 

int binarySearch(int arr[], int size, int x){
    int lower=0, upper=size-1, mid;
    while(lower<=upper){
        mid=(upper + lower)/2;
        if(arr[mid]>x) upper = mid - 1;
        else if(arr[mid]<x) lower = mid + 1;
        else return mid;
    }
    return -1;
}

 

int main(){
     int arr[] = {15, 20, 25, 30, 31, 44, 66}; 
    //Lay ra đo dai cua mang
    int n = sizeof(arr) / sizeof(arr[0]);
    //Phan tu can tim
    int x = 25;
    printf("Vi tri: %d", binarySearch(arr,n,x)+1);
    return 0;
}