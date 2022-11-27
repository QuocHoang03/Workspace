#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;

int ngto(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return (n>=2);
}
int main(){
	FILE *f;
	f=fopen("test.txt","w");
	int a[5]={1,2,3,4,5};
	if (f==NULL) {
		printf("Can't open file\n");
	}
	else {
		for (int i=0;i<5;i++){
			if (ngto(a[i])==1){
				fprintf(f,"%d ",a[i]);
			}
		}
	}
}
