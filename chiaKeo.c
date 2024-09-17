//C
#include<stdio.h>

int n, M;
int t[20], a[20], x[20];
int f=0;
int result=0;


void solution(){
	// neu f tong bang M -> + 1 nghiem 
	if(f == M){
		result += 1;

	}
}
//  
void Try(int k){
	// (M )/a[k] la gia tri lon nhat cua x[k] khi cac x[>k] khac bang 0
	for(int v = 0; v <= (M)/a[k]; v++){
		x[k] = v;
		f += x[k]*a[k];// tong hien tai  
		// duyet den xn 
		if(k==n-1){
			solution();
		}else{
			Try(k+1);
		}
		// sau khi thuc hien solution, cap nhat lai tong f 
		f -= x[k]*a[k];
	}
}

int main(){

	scanf("%d %d", &n, &M);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	Try(0);
    printf("%d",result);

	return 0;
}
