#include<stdio.h>
void inPutArray(int a[],int &n){
	for(int i=0;i<n;++i){
		printf("arr[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void outPutArray(int a[],int n){
	int s=1;
	for(int i=0;i<n;++i){
		if(a[i]>2 && a[i]<6){
			s*=a[i];
	}
}
	printf("Tich cac so lon hon 2 va nho hon 6 la: %d",s);
}
int main(){
	int n;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&n);
	int a[n];
	inPutArray(a,n);
	outPutArray(a,n);
}
