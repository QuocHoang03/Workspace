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

void XoaSoChan(int &n,int arr[]){
	printf("\nMang sao khi xoa: ");
	for(int i=0;i<n;++i){
		if(arr[i]%2 == 0){
			xoaPhanTu(n,arr,i);
			n--;
			i--;
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
	XoaSoChan(n,arr);
	output(n,arr);
}
