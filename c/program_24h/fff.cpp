#include<stdio.h>
int ucln(int a,int b){
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",ucln(a,b));
}
