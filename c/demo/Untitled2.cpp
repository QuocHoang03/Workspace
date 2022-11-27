#include<stdio.h>
int main(){
	int sl = 0;
	for(int i =0;i<=40;++i){
		for(int j =0;j<=100;++j){
			for(int k =0;k<=200;++k){
				if(k*1000+j*2000+i*5000 == 200000){
					printf("%d to 1000 %d to 2000 %d to 5000 \n",k,j,i);
					++sl;	
				}
			}	
		}
	}
	printf("\n\nCo tong %d phuong an",sl);
}
