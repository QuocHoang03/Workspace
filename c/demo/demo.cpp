#include<stdio.h>

//void input(int n,int m,int arr[][100]){
//	for(int i=0;i<n;++i){
//		for(int j=0;j<n;++j){
//			printf("arr[%d][%d] = ",i,j);
//			scanf("%d",&arr[i][j]);
//		}
//	}
//}

void output(int arr[][4]){
	for(int i=0;i<3;++i){
		for(int j=0;j<4;++j){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	int sum =0;
	for(int i=0;i<3;++i){
		for(int j=0;j<=i;++j){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
//	int n,m;
	int arr[3][4]={
		{1,2,3,4},
		{1,2,3,4},
		{1,2,3,4}
	};
//	input(n,m,arr);
	output(arr);
}
