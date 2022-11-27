#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	f= fopen("BAI5.txt","w");
	if(f==NULL){
		printf("\n loi tao hoac mo file");
		exit(1);
	}
	int n;
	printf("\n Nhap vao so n: ");
	scanf("%d",&n);
	fprintf(f,"%d",n);
	fclose(f);
	return 0;
}
