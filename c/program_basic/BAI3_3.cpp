#include<stdio.h>
#include<math.h>
int checkSnt(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(!(n%i)) return 0;
	}
	return n>1;
}
void inPutArray(int a[],int &n){
	for(int i=0;i<n;++i){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void outPutArray(int a[],int n){
	printf("So nguyen to trong day la: ");
	for(int i=0;i<n;++i){
		if(checkSnt(a[i]) == 1)
			printf("%d ",a[i]);
	}
}
int main(){
	int n;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d",&n);
	int a[n];
	inPutArray(a,n);
	outPutArray(a,n);
}
