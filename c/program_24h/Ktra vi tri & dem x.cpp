//5.7 SO LUONG PHAN TU GIONG X

#include<stdio.h>
#include<math.h>
void nhapmang(int arr[],int &n,int &x){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
}

void ktraX(int arr[],int n,int x){
	int demx=0;
	int demvt=0;
	for(int i=0;i<n;++i){
		if(arr[i]==x) {
		++demx;
		}
	}
	printf("So luong: %d\n",demx);	
	printf("Vi tri: ");
	for(int i=0;i<n;++i){
		++demvt;
		if(arr[i]==x) {
			printf("%d ",demvt);
		}
	}

}

int main(){
	int n,x;
	scanf("%d",&n);
	int arr[n];
	nhapmang(arr,n,x);
	ktraX(arr,n,x);
}
