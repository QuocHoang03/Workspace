#include<stdio.h>
#include<string.h>
struct thuVien{
	int maSoSach;
	char nhanDe[30];
	char tenTacGia[30];
	char nhaXuatBan[30];
	int namXuatBan;
};
void inputInformation(thuVien TV[],int n){
	for(int i=0;i<n;++i){
	printf("(*) Sinh vien thu %d \n",i+1);
		printf("	+ Nhap ma so sach: ");
		scanf("%d",&TV[i].maSoSach);
		getchar();
		printf("	+ Nhap nhan de sach: ");
		fgets(TV[i].nhanDe,sizeof(TV[i].nhanDe),(stdin));
		TV[i].nhanDe[strlen(TV[i].nhanDe)-1]=NULL;
		printf("	+ Nhap ten tac gia : ");
		fgets(TV[i].tenTacGia,sizeof(TV[i].tenTacGia),(stdin));
		TV[i].tenTacGia[strlen(TV[i].tenTacGia)-1]=NULL;
		printf("	+ Nhap nha xuat ban: ");
		fgets(TV[i].nhaXuatBan,sizeof(TV[i].nhaXuatBan),(stdin));
		TV[i].nhaXuatBan[strlen(TV[i].nhaXuatBan)-1]=NULL;
		printf("	+ Nhap nam xuat ban: ");
		scanf("%d",&TV[i].namXuatBan);
		getchar();
	}
}
void outputInformation(thuVien TV[],int n){
	printf("	MA SO SACH \t \t NHAN DE  \t  TEN TAC GIA \t  \t  NHA XUAT BAN \t NAM XUAT BAN \n");
	printf(" \n---------------------------------------------------------------------------------------------------------------- \n");
	for(int i=0;i<n;++i){
		printf("	%d \t \t   %s  \t  %s  \t  %s  \t  %d \n",TV[i].maSoSach,TV[i].nhanDe,TV[i].tenTacGia,TV[i].nhaXuatBan,TV[i].namXuatBan);
	}
}
void timSach(thuVien TV[],int n){
	printf("Nhap ma so sach can tim: ");
	int nhapSach, count=0;
	scanf("%d",&nhapSach);
	getchar();
	for(int i=0;i<n;++i){
		if(TV[i].maSoSach == nhapSach){
	printf("	MA SO SACH \t \t NHAN DE  \t  TEN TAC GIA  \t  \t  NHA XUAT BAN  \t  NAM XUAT BAN \n");
	printf(" \n---------------------------------------------------------------------------------------------------------------- \n");
			printf("	%d \t \t   %s  \t  %s  \t  %s  \t  %d \n",TV[i].maSoSach,TV[i].nhanDe,TV[i].tenTacGia,TV[i].nhaXuatBan,TV[i].namXuatBan);	
			++count;
		}
	}
	if(count == 0)	
		printf("Khong tim thay sach trong thu vien !");
}
void timSachCungTgia(thuVien TV[],int n){
	printf("Nhap ten tac gia: ");
	char nhapTgia[30];
	char tam[30];
	int count=0;
	thuVien mangTv[10];
	fgets(nhapTgia,sizeof(nhapTgia),(stdin));
	nhapTgia[strlen(nhapTgia)-1]=NULL;
	for(int i=0;i<n;++i){
		strcpy(tam,TV[i].tenTacGia);
		if(strstr(strupr(tam),strupr(nhapTgia))){
			mangTv[count] = TV[i];
			++count;
		}
	}
	outputInformation(mangTv,count);
}
void locSachCungNam(thuVien TV[],int n){
	printf("Nhap nam sach can tim: ");
	int namSach;
	int count=0;
	thuVien mangSv[10];
	scanf("%d",&namSach);
	getchar();
	for(int i=0;i<n;++i){
		if( TV[i].namXuatBan == namSach ){
			mangSv[count] = TV[i];
			++count;
		}
	}
	outputInformation(mangSv,count);
}
void nhapTuBatKy(thuVien TV[],int n){
	printf("Nhap tu bat ky cua nhan de sach can tim: ");
	char tuBatKy[10];
	char tam[30];
	thuVien mangTv[10];
	int count=0;
	fgets(tuBatKy,sizeof(tuBatKy),(stdin));
	tuBatKy[strlen(tuBatKy)-1]=NULL;
	for(int i=0;i<n;++i){
		strcpy(tam,TV[i].nhanDe);
		if(strstr(strupr(tam),strupr(tuBatKy))){
			mangTv[count] = TV[i];
			++count;
		}
	}
	outputInformation(mangTv,count);
}
int main(){
	int n;
	thuVien TV[10];
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	getchar();
	inputInformation(TV,n);
	printf("-- Tat ca sach co trong thu vien -- \n");
	outputInformation(TV,n);
	printf("\n \n");
	timSach(TV,n);
	printf("\n \n");
	timSachCungTgia(TV,n);
	printf("\n \n");
	locSachCungNam(TV,n);
	printf("\n \n");
	nhapTuBatKy(TV,n);
	printf("\n \n");
}
