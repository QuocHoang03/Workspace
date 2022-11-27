#include"stdio.h"
int soDoiXung(int n){
	int m=n,s=0;
	while(m){
		s=s*10+m%10;
		m/=10;
	}
	if(n==s) return 1;
	return 0;
}
void nhapMang(int a[],int &n){
	for(int i=0;i<n;++i){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n){
	printf("Cac so doi xung trong mang la: ");
	for(int i=0;i<n;++i){
		if(soDoiXung(a[i])==1){
			printf("%d ",a[i]);
		}
	}
}
int main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int a[n];
	nhapMang(a,n);
	xuatMang(a,n);
}
