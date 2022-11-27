#include <stdio.h>
#include <math.h>
int ngto(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return n>=2;
}
int main(){
	int n;scanf("%d",&n);
	int a[1000];
	int b[100000]={0};
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		if (ngto(a[i])) b[a[i]]++;
	}
//	 for (int i=0;i<100000;i++){
//	 	if (b[i]!=0){
//	 		printf("%d %d\n",i,b[i]);
//	 	}
//	 }
	for (int i=0;i<n;i++){
		if (b[a[i]]!=0){
			printf("%d %d\n",a[i],b[a[i]]);
			b[a[i]]=0;
		}
	}
}
