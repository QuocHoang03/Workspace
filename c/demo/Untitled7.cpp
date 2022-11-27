#include<stdio.h>
#include<math.h>

int snt(int n){
	if(n<2)	return 0;
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0)	return 0;
	}
	return 1;
}

void input(int n,int arr[]){
	for(int i=0;i<n;++i){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

void output(int n,int arr[]){
	for(int i=0;i<n-1;++i){
		for(int j = i+1;j<n;++j){
			if(snt(arr[i])==1 && snt(arr[j])==1){
				if(arr[i]>arr[j]){
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}			
			}
		}
	}
	for(int i=0;i<n;++i){
		printf("%d ",arr[i]);
	}
}

int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	int arr[n];
	input(n,arr);
	output(n,arr);
}
