#include <stdio.h>
int main(){
	float  diem ;
	scanf("%f", &diem );
	if( diem <5)printf("Kem");
	else if( diem >=5&& diem <7)printf("Trung binh");
	else if( diem >=7&& diem <9)printf("Kha");
	else if( diem >=9&& diem <=10)printf("Gioi");
	return 0;
}
