#include <stdio.h>
#include <string.h>
int Demso(char a[]){
	int dem=0;
	for (int i=0;i<strlen(a);i++){
		if (a[i]>='0'&&a[i]<='9') dem++;
	}
	return dem;
}

int DemKiTu(char a[]){
	int dem=0;
	for (int i=0;i<strlen(a);i++){
		if ((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')) dem++;
	}
	return dem;
}

int main(){
	FILE *f;
	f=fopen("test.txt","r");
	int kituso=0,demsotu=0,kitu=0;
	if (f==NULL) {
		printf("Can't open file\n");
	}
	else{
		char tam[10000],a[10000];
		while(fgets(tam,1000,f)!=NULL){
			kituso+=Demso(tam);
			kitu+=DemKiTu(tam);
			tam[strlen(tam)-1]='\0';
			char *tmp=strtok(tam," ");
			while(tmp!=NULL){
				demsotu++;
				tmp=strtok(NULL," ");
			}
		}
	}
	printf("%d\n%d\n%d",kituso,demsotu,kitu);
}
