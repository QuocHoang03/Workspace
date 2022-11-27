#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	f = fopen("Bai_011.txt","r");
	if(f==NULL){
		printf("\n Loi tao hoac mo file");
	}
	int n;
	fscanf(f,"%d",&n);
	
	printf("\nGia tri cua n la: %d",n);
	fclose(f);
}
