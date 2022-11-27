#include<stdio.h>

int nhapmang(int arr[],int &n){
	scanf("%d",&n);
	for(int  i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
}
int xuatmang(int arr[],int n){
	for(int  i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int chen(int arr[],int n,int k){
	int x;
	scanf("%d",&k);
	printf("Nhap so can chen: ");
	scanf("%d",&x);
	for(int i=n+1;i>k-1;i--){
		arr[i]=arr[i-1];
	}
	arr[k-1]=x;
	++n;
	xuatmang(arr,n);
}
int main(){
	int n,k;
	int arr[100];
	nhapmang(arr,n);
	xuatmang(arr,n);
	printf("\n");
	printf("Nhap vi tri can chen: ");
	chen(arr,n,k);
}
