#include<stdio.h>
#include<string.h>
int main(){
	char n[50];
	int count=0;
	fgets(n,sizeof(n),(stdin));
	n[strlen(n)-1]='NULL';
	for(int i=0;i<strlen(n);++i){
		if(n[i]!=' '){
			++count;
		}
	}
		printf("%d",count);
}
