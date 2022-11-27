#include<stdio.h>
#include<string.h>
int main(){
	char a[30];
	printf("Nhap chuoi a :");
	fflush(stdin);	gets(a);
	for(int i=0; i<strlen(a)-1;++i){
		if(a[i]!=' ')	printf("%c",a[i]);
		
		if(a[i]==' '&&a[i+1]!=' ')		printf("\n");
	}
		if(a[strlen(a)-1!=' '])	printf("%c",a[strlen(a)-1]);
}
