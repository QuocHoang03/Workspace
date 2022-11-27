#include"stdio.h"
#include"math.h"
int snt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(n%2==0){
			return 0;
		}
	}
	return n>2;
}
void nhapMang(int n,int arr[]){
	for(int i=0;i<n;++i){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void xuatMang(int n,int arr[]){
	printf("Cac so nguyen to co trong mang la: ");
	for(int i=0;i<n;++i){
		if(snt(arr[i])==1){
			printf("%d ",arr[i]);
		}
	}
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int arr[100];
	nhapMang(n,arr);
	xuatMang(n,arr);
}
