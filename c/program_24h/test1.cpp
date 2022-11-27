#include<stdio.h>

int main(){
	int n,count=0;
	scanf("%d",&n);
	while(n--){
		int arr[3],dem=0;
		for(int i=0;i<3;++i){
			scanf("%d",&arr[i]);
			if(arr[i]==1)	++dem;
		}
		if(dem >= 2)	++count;
	}
	printf("%d",count);
}
