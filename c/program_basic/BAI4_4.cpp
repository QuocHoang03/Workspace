#include<stdio.h>
#include<string.h>
int main(){
	char c[50];
	int count=0;
	fgets(c,sizeof(c),(stdin));
	c[strlen(c)-1]=NULL;
	for(int i=0;i<strlen(c);++i){
		if(c[i]==' '&&count==0){
			c[i]='NULL';
		}else if(c[i]!=' '){
			printf("%c",c[i]);
			++count;
		}else if(c[i]==' '&&c[i+1]!=' '){
			printf("\n");
			++count;
		}
	}
}
