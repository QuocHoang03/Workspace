#include<stdio.h>
int check(int n){
	int count=0;
	for(int i=1;i<n;++i){
		if(!(n%i)){
			count+=i;
		}
	}
	if(count == n)	return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(check(n)==1)
		printf("%d la so hoan hao",n);
	else
		printf("%d khong phai la so hoan hao",n);
}
