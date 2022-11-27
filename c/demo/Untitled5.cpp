#include<stdio.h>

int reverse(int n){
	int tmp =0;
	while(n!=0){
		tmp = tmp*10+n%10;
		n/=10;
	}
	return tmp;
}

int ktraChuSoDauLaLe(int n){
	int tmp = reverse(n)%10;
	if(tmp%2!=0)
		return 1;
	else
		return 0;
}

void input(int n,int arr[]){
	for(int i=0;i<n;++i){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

void output(int n,int arr[]){
	for(int i=0;i<n;++i){
		if(ktraChuSoDauLaLe(arr[i])){
			printf("\narr[%d] = %d",i,arr[i]);	
		}

	}
}


int main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int arr[n];
	input(n,arr);
	output(n,arr);
	
}
