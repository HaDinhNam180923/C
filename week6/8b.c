#include <stdio.h>
int main(){
	float  diem ;
	scanf("%f", & diem );
	if( diem <4)printf("F");
	else if( diem >=4&& diem <5)printf("D");
	else if( diem >=5&& diem <5.5)printf("D+");
	else if( diem >=5.5&& diem <6.5)printf("C");
	else if( diem >=6.5&& diem <7)printf("C+");
	else if( diem >=7&& diem <8)printf("B");
	else if( diem >=8&& diem <8.5)printf("B+");
	else if( diem >=8.5&& diem <9.5)printf("A");
	else if( diem >= 9.5) printf ("A+");
	return 0;
}
