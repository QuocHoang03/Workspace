#include"stdio.h"
#include"string.h"
int demSo(char tam[]){
	int count=0;
	for(int i=0;i<=strlen(tam);++i){
		if(tam[i]>='0'&&tam[i]<='9'){
			++count;
		}
	}
	return count;
}
int main(){
	FILE *f;
	f=fopen("dethi1.txt","r");
	int kyTuSo=0;
	if(f==NULL){
		printf("\nLoi mo hoac nhap file!");
	}else{
		char tam[10000];
		while(fgets(tam,1000,f)!=NULL){
			kyTuSo=demSo(tam);
		}
	}
	printf("\n%d",kyTuSo);
}
