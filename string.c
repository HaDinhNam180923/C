#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char s1[30] = "abcd", s2[30] = "efgh";
	printf("Chieu dai s1: %d\n", strlen(s1));
	strcat(s1, s2);
	puts(s1); // in xau s1
	// gets nhap xau co dau cach
	printf("Chieu dai s1 sau khi ghep noi: %d", strlen(s1));
	return 0;

}