//5.4 SX TANG 

#include<stdio.h>
#include<math.h>
void nhapmang1(int arr1[],int &m){
	for(int i=0;i<m;i++){
		scanf("%d",&arr1[i]);
	}
}
void nhapmang2(int arr2[],int &n){
	for(int j=0;j<n;j++){
		scanf("%d",&arr2[j]);
	}
}


void xuatmang1(int arr1[],int m){
	for(int i=0;i<m;i++){
		printf("%d ",arr1[i]);
	}
}
void xuatmang2(int arr2[],int n){
	for(int j=0;j<n;j++){
		printf("%d ",arr2[j]);
	}
}
void giamdan(int arr[],int n){
	int k;
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
		if(arr[i]<arr[j]){
			k=arr[i];
			arr[i]=arr[j];
			arr[j]=k;
			}	
		}
	}
}

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int arr1[m];
	int arr2[n];
	
	nhapmang1(arr1,m);
	giamdan(arr1,m);
	xuatmang1(arr1,m);
	printf("\n");
	nhapmang2(arr2,n);
	giamdan(arr2,n);
	xuatmang2(arr2,n);
}
