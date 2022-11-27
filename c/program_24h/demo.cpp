#include"stdio.h"
void nhapmang(int &n,int arr[]){
	for(int i=0;i<n;++i){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int n,int arr[]){
	int sum=0;
	for(int i=0;i<n;++i){
		if(arr[i]%2!=0){
			sum=sum+arr[i];
		}
	}
	printf("%d",sum);
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[101];
	nhapmang(n,arr);
	xuatmang(n,arr);
}

