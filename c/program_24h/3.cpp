#include <stdio.h>

int main(){
	int n,chan=0,le=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;++i){
		if(!(a[i]%2))	++chan;
		else ++le;
	}
	if(le>chan)	{
		le=chan;
	}
	printf("%d",le);
}
