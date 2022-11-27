#include<stdio.h>
void inputArray(int arr[],int d[],int &n){
	for(int i=0;i<n;++i){
		scanf("%d",&arr[i]);
		d[arr[i]]++;
	}
}
void outputArray(int arr[],int d[],int n){
	int count=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<=i;++j){
			if(arr[i]==arr[j]) ++count;
		}
		if(count==1){
			printf("%d xuat hien %d lan\n",arr[i],d[arr[i]]);
			count=0;
		}
	}
//	printf("%d",count);
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],d[100000]={0};
	inputArray(arr,d,n);
	outputArray(arr,d,n);
}
