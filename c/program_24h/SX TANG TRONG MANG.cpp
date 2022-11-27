//5.4 SX TANG 

#include<stdio.h>
#include<math.h>
void nhapmang(int arr[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
void tangdan(int arr[],int n){
	int k;
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
		if(arr[i]>arr[j]){
			k=arr[i];
			arr[i]=arr[j];
			arr[j]=k;
			}	
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	nhapmang(arr,n);
	tangdan(arr,n);
	xuatmang(arr,n);
}
