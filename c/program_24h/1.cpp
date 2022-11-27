#include<stdio.h>
#include<math.h>
int main(){
	int n,i = 1;
	float S = 0;
	printf("\n Nhap so n:");
	scanf("%d",&n);
	if(n<1){
		printf("\n N phai lon hon hoac bang 1. xin vui long nhap lai!");
	}
	if(n>1){
		while(i<=n){
		S=S+1.0/i;
		i++;
		}
	printf("\nTong cua 1+1/2+1/3+...+1/%d = %.2f",n,S);
	}
}
