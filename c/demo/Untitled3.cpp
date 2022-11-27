#include <stdio.h>
#include<string.h>

struct hocSinh{
	char hoVaTen[50];
	float toan;
	float van;
};

int main() {
	int n;
	printf("Nhap so hoc sinh: ");
	scanf("%d",&n);
	getchar();
	hocSinh a[n];
	
	for(int i=0;i<n;++i){
		printf("Nhap Sinh Vien Thu %d \n",i+1);
		printf("Nhap ten: ");
		fgets(a[i].hoVaTen,sizeof(a[i].hoVaTen),(stdin));
		a[i].hoVaTen[strlen(a[i].hoVaTen)-1]=NULL;
		printf("Nhap diem toan: ");
		scanf("%f",&a[i].toan);
		printf("Nhap diem van: ");
		scanf("%f",&a[i].van);
		getchar();
		printf("\n");
	}
	
	for(int i=0;i<n;++i){
		printf("Sinh vien thu %d",i+1);
		printf("Ten: %s",a[i].hoVaTen);
		printf("\nDiem Toan: %.2f",a[i].toan);
		printf("\nDiem Van: %.2f",a[i].van);
		printf("\nDiem Trung Binh: %.2f \n\n",(a[i].toan+a[i].van)/2);
	}
}
