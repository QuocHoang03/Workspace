#include<stdio.h>
#include<string.h>
void xoaXuongDong(char x[]){
	size_t len=strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
int POS(char *s1, char *s2){
	char *s3;
	int pos;
	s3=strstr(s1,s2);
	if(s3!= NULL){
		pos=strlen(s1)-strlen(strstr(s1,s2));
		return pos;
	}else{
		return -1;
	}
}
int main(){
	char s1[50],s2[50];
//	gets(s1);
//	gets(s2);
	fgets(s1,sizeof(s1),stdin);
	xoaXuongDong(s1);
	
	fgets(s2,sizeof(s2),stdin);
	xoaXuongDong(s2);
	
	printf("%d", POS(s1,s2));
	
}
