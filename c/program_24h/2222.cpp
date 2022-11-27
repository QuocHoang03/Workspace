#include"stdio.h"
void nhapMang(int &n,int arr[]){
	for(int i=0;i<n;++i){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void xuatMang(int n,int arr[]){
	int sum=0;
	for(int i=0;i<n;++i){
		if(arr[i]%2==0){
			sum+=arr[i];
		}
	}
	printf("tong cac so chan trong mang la: %d",sum);
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int arr[100];
	nhapMang(n,arr);
	xuatMang(n,arr);
}
