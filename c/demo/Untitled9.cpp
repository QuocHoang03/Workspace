#include<stdio.h>

void input(int n,int arr[]){
	for(int i=0;i<n;++i){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

void output(int n,int arr[]){
	for(int i=0;i<n;++i){
		printf("%d ",arr[i]);
	}
}

void xoaPhanTu(int n,int arr[],int location){
	for(int i=location;i<n;++i){
		arr[i] = arr [i+1];
	}
}

void XoaSoTrungNhau(int &n,int arr[]){
	printf("\nMang sao khi xoa: ");
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(arr[i] == arr[j]){
				xoaPhanTu(n,arr,j);
				n--;
				i--;
			}
		}
	}
}



int main(){
	int n;
	printf("Nhap so luong phan tu : ");
	scanf("%d",&n);
	int arr[n];
	input(n,arr);
	printf("Mang vua nhap: ");
	output(n,arr);
	XoaSoTrungNhau(n,arr);
	output(n,arr);
}
