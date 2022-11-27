#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	f= fopen("BAI6.txt","w");
	if(f==NULL){
		printf("\n loi tao hoac mo file");
		exit(1);
	}
	int n;
		fprintf(f,"%c %d %d \n",'A',3,2);
	for(int i=1;i<=6;++i){
		fprintf(f,"%d ",i);	
	}
	fclose(f);
	return 0;
}
