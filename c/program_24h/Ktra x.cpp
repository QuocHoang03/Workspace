//5.3 KTra x

#include<stdio.h>
#include<math.h>
void nhapmang(int arr[],int &n,int &x){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
}

int ktraX(int arr[],int n,int x){
	for(int i=0;i<n;++i){
		if(arr[i]==x) {
			return x;
		}
	}	return 0;
}

int main(){
	int n,x;
	scanf("%d",&n);
	int arr[n];
	nhapmang(arr,n,x);
	if(ktraX(arr,n,x)==0) printf("-1");
	else printf("%d",ktraX(arr,n,x));
}
