#include"stdio.h"
int main(){
	int n,m,count=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	m=n;
	while(m){
		int x=m%10;
		if(x%2!=0){
			count++;
		}
		m/=10;
	}
	printf("%d co %d chu so le",n,count);
}
