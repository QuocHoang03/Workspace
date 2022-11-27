#include<stdio.h>
#include<string.h>
int main(){
	char a[30];
	printf("Nhap chuoi a :");
	fflush(stdin);	gets(a);
	
	if(a[0]!=' ')	a[0]=a[0]-32;
	
	for(int i=0; i<strlen(a)-1;++i){
		if(a[i]!=' ')	printf("%c",a[i]);
		
		if(a[i]==' '&&a[i+1]!=' '){
			a[i+1]=a[i+1]-32; printf(" ");
		}
	}
		if(a[strlen(a)-1!=' '])	printf("%c",a[strlen(a)-1]);
}
