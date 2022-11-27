#include<stdio.h>
int main(){
	int n,count=0;
	scanf("%d",&n);
	for(int i=0;i<=n;++i){
		if(i%2)
		count+=i;
	}
	printf("%d",count);
}
