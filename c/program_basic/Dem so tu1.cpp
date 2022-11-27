#include<stdio.h>
#include<string.h>
int main(){
	char a[100],dem=0;
	printf("Nhap Chuoi a: ");
	fflush(stdin); gets(a);
	if(a[0]!=' '){
		++dem;
	}
	for(int i=0;i<strlen(a)-1;++i){
		if(a[i]==' '&&a[i+1]!=' '){
			++dem;
		}
	}	printf("So Tu = %d",dem);
}
