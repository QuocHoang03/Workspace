#include<stdio.h>
#include<string.h>
int main(){
	char a[30];
	printf("nhap chuoi a: ");
//	scanf("%s",&a);
	fflush(stdin); gets(a);
	int dem=0;
	for(int i=0;i<strlen(a);++i){
		if(a[i]>='0' && a[i]<='9'){
			++dem;
		}
	}
	printf("so ky tu la so la %d",dem);
}
