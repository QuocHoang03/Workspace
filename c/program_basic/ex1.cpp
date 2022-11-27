#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i){
		printf("arr[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int s=1;
	for(int i=0;i<n;++i){
		if(a[i]>2 && a[i]<6){
			s*=a[i];
		}
	}
		printf("Tich cac so lon hon 2 va nho hon 6 la: %d",s);
}
