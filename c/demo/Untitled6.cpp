#include<stdio.h>
#include<math.h>
void input(int n,int arr[]){
	for(int i=0;i<n;++i){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

void output(int n,int arr[]){
	int sum=0,count=0;
	for(int i=0;i<n-1;++i){
		sum += abs(arr[i] - arr[i+1]);
		++count;
	}
	float tb = (float)sum/count;
	printf("Khoang cach trung binh = %.2f",tb);
}

int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	int arr[n];
	input(n,arr);
	output(n,arr);
}
