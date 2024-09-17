#include<stdio.h> 

int main() {
	int n, *iptr;
	n=7;
	iptr = &n;
	printf("%d\n", *iptr);
	*iptr=1;
	printf("%d", n);
	return 0;
	}
