#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	f=fopen("Bai_01.txt","w");
	if(f==NULL){
		printf("\n Loi tao hoac mo file");
		exit(1);
	}
	int n;
			printf("Nhap vao day so: ");
	do{
		scanf("%d",&n);
		fprintf(f,"%d ",n);
	}while(n);
	fclose(f);
	return 0;
}
