#include<stdio.h>
#include<string.h>
void xoaXuongDong(char x[]){
	size_t len= strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
int main(){
	char s[50]="";
	printf("Nhap s = ");
	fgets(s,sizeof(s),stdin);
	xoaXuongDong(s);
	  
	printf("\ns = %s",s);
	strrev(s);
	printf("\nSau khi dao nguoc s = %s",s);
}
