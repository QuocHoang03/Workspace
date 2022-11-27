	//QUAN LY DANH SACH SINH VIEN
	
#include<stdio.h>
#include<string.h>
void xoaXuongDong(char x[]){
	size_t len=strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

struct sinhVien{
	char tensv[50];
	int mssv;
	float dthiCS;
	float dthiCN;
};
int inputThongTin(sinhVien sv[],int n){
	for(int i=1;i<=n;++i){
		printf("-- Sinh vien thu %d --\n",i);
		printf("	+ Ho va ten: ");
		fgets(sv[i].tensv,sizeof(sv[i].tensv),(stdin));
			xoaXuongDong(sv[i].tensv);
		printf("	+ MSSV: ");
			scanf("%d",&sv[i].mssv);
		printf("	+ Diem thi co so: ");
			scanf("%f",&sv[i].dthiCS);
		printf("	+ Diem thi chuyen nghanh: ");
			scanf("%f",&sv[i].dthiCN);
			getchar();
	}
}
int outputThongTin(sinhVien sv[],int n){
	printf("	STT	\t Ho Va Ten \t\t MSSV \t Dthi C.so \t Dthi C.Nganh");
	printf("\n--------------------------------------------------------------------------------------\n");
	for(int i=1;i<=n;++i){
		printf("	%d	\t %s \t \t %d \t %.1f \t \t %.1f\n",i,sv[i].tensv,sv[i].mssv,sv[i].dthiCS,sv[i].dthiCN);
	}
}
int soLuongSinhVienDau(sinhVien sv[],int n){
	int count=0;
	printf("-- Danh sach sinh vien thi dau -- \n");
	for(int i=1;i<=n;++i){
		if( (sv[i].dthiCS>=4.0) && (sv[i].dthiCN>=4.0) ){
			printf("	%d	\t %s \t \t %d \t %.1f \t \t %.1f\n",i,sv[i].tensv,sv[i].mssv,sv[i].dthiCS,sv[i].dthiCN);
			++count;
		}
	}
	if(count>0){
		printf("+ Co %d sinh vien thi dau \n \n",count);
	}else{
		printf("+ Khong co sinh vien thi dau \n \n");
	}
}
int soLuongSinhVienRot(sinhVien sv[],int n){
	int count=0;
	printf("-- Danh sach sinh vien thi rot -- \n");
	for(int i=1;i<=n;++i){
		if( (sv[i].dthiCS<4.0) && (sv[i].dthiCN<4.0) ){
			printf("	%d	\t %s \t \t %d \t %.1f \t \t %.1f\n",i,sv[i].tensv,sv[i].mssv,sv[i].dthiCS,sv[i].dthiCN);
			++count;
		}
	}
	if(count>0){
		printf("+ Co %d sinh vien thi rot \n \n",count);
	}else{
		printf("+ Khong co sinh vien thi rot");
	}
}
int main(){
	int n;
	sinhVien sv[10];
	printf("Nhap vao so sinh vien: ");
	scanf("%d",&n);
	getchar();
	inputThongTin(sv,n);
	printf("Danh sach sinh vien vua nhap:\n");
	outputThongTin(sv,n);
	
	soLuongSinhVienDau(sv,n);
	printf("\n");
	soLuongSinhVienRot(sv,n);
}
