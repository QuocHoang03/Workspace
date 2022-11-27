#include<stdio.h>

int ucln(int a,int b){
	while(b!=0){
		int r = a%b;
		a=b;
		b=r;
	}
	return a;
}

void input(int n,int arr[]){
	for(int i=0;i<n;++i){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

void output(int n,int arr[]){
	int	tmp,cpy=arr[0];
	for(int i=0;i<n;++i){
		tmp = ucln(cpy,arr[i+1]);
		cpy = tmp;
	}
	printf("Ucln : %d",tmp);
}

int main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int arr[n];
	input(n,arr);
	output(n,arr);
}
