#include<stdio.h>
#include<string.h>

struct sinhVien{
	char hoDem[30];
	char tenSv[10];
	float diemTin;
	float diemNN;
	float diemTB;
	char xepLoai[10];
};
void inputThongTin(sinhVien SV[],int &n){
	for(int i=0;i<n;++i){
		printf("-- Sinh vien thu %d -- \n",i+1);
		printf("	+ Ho va dem sinh vien: ");
		fgets(SV[i].hoDem,sizeof(SV[i].hoDem),(stdin));
			SV[i].hoDem[strlen(SV[i].hoDem)-1]=NULL;
		printf("	+ Ten sinh vien: ");
			fgets(SV[i].tenSv,sizeof(SV[i].tenSv),(stdin));
			SV[i].tenSv[strlen(SV[i].tenSv)-1]=NULL;
		printf("	+ Diem tin: ");
			scanf("%f",&SV[i].diemTin);
		printf("	+ Diem ngoai ngu: ");
			scanf("%f",&SV[i].diemNN);
			getchar();
	}
}
void outputThongTin(sinhVien SV[],int n){
	printf("   Ho Ten \t \t Diem Tin \t Diem Ngoai Ngu \t Diem Trung Binh \t Xep Loai");
	printf("\n \n------------------------------------------------------------------------------------------------- \n");
	for(int i=0;i<n;++i){
		SV[i].diemTB = ( SV[i].diemTin + SV[i].diemNN )/2;
		if(SV[i].diemTB<5.0){
			strcpy(SV[i].xepLoai , "Yeu");
		}else if(SV[i].diemTB>=5.0 && SV[i].diemTB<6.5){
			strcpy(SV[i].xepLoai , "T.Binh");
		}else if(SV[i].diemTB>=6.5 && SV[i].diemTB<8.0){
			strcpy(SV[i].xepLoai , "Kha");
		}else if(SV[i].diemTB>=8.0){
			strcpy(SV[i].xepLoai , "Gioi");
		}
			printf("   %s %s \t %.1f \t \t %.1f \t \t \t %.1f \t \t \t %s \n", SV[i].hoDem, SV[i].tenSv, SV[i].diemTin, SV[i].diemNN, SV[i].diemTB, SV[i].xepLoai);
	}
}
void sinhVienThiLai(sinhVien SV[],int n){
	int count=0;
	printf("(*) Danh sach sinh vien phai thi lai \n");
	for(int i=0;i<n;++i){
		if( SV[i].diemTin < 4 || SV[i].diemNN < 4 ){
			++count;
			if(count==1){
				printf("   Ho Ten \t \t Diem Tin \t Diem Ngoai Ngu \t Diem Trung Binh \t Xep Loai");
				printf("\n \n------------------------------------------------------------------------------------------------- \n");
			}
			printf("   %s %s \t %.1f \t \t %.1f \t \t \t %.1f \t \t \t %s \n", SV[i].hoDem, SV[i].tenSv, SV[i].diemTin, SV[i].diemNN, SV[i].diemTB, SV[i].xepLoai);
		}
	}
	if(count==0) printf("Khong co sinh vien thi lai \n");
}
void sinhVienGioi(sinhVien SV[],int n){
	int count=0;
	printf("(*) Danh sach sinh vien xep loai gioi \n");
	for(int i=0;i<n;++i){
		if( SV[i].diemTin >= 8 && SV[i].diemNN >= 8 ){
			++count;
			if(count==1){
				printf("   Ho Ten \t \t Diem Tin \t Diem Ngoai Ngu \t Diem Trung Binh \t Xep Loai");
				printf("\n \n------------------------------------------------------------------------------------------------- \n");
			}
			printf("   %s %s \t %.1f \t \t %.1f \t \t \t %.1f \t \t \t %s \n", SV[i].hoDem, SV[i].tenSv, SV[i].diemTin, SV[i].diemNN, SV[i].diemTB, SV[i].xepLoai);
		}
	}
	if(count==0)	printf("Khong co sinh vien gioi");
}
void sinhVienTbCaoNhat(sinhVien SV[],int n){
	printf("(*) Danh sach sinh vien co diem tb cao nhat lop \n");
	printf("   Ho Ten \t \t Diem Tin \t Diem Ngoai Ngu \t Diem Trung Binh \t Xep Loai");
	printf("\n \n------------------------------------------------------------------------------------------------- \n");
	int max=(int)(-1e9);
	for(int i=0;i<n;++i){
		if(SV[i].diemTB>max)
			max=SV[i].diemTB;
	}
	for(int i=0;i<n;++i){
		if(SV[i].diemTB == max){
			printf("   %s %s \t %.1f \t \t %.1f \t \t \t %.1f \t \t \t %s \n", SV[i].hoDem, SV[i].tenSv, SV[i].diemTin, SV[i].diemNN, SV[i].diemTB, SV[i].xepLoai);
		}
	}
	
}
void sinhVienSttAlphabet(sinhVien SV[],int n){
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(strcmp(SV[i].tenSv, SV[j].tenSv) >0){
				sinhVien doicho = SV[i];
				SV[i] = SV[j];
				SV[j]= doicho;
			}
		}
	}
}
void sinhVienDiemTbGiam(sinhVien SV[],int n){
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(SV[i].diemTB < SV[j].diemTB){
				sinhVien doicho = SV[i];
				SV[i] = SV[j];
				SV[j] = doicho;
			}
		}
	}
}
void timSinhVien(sinhVien SV[],int n){
	char nhapTen[30];
	printf("Nhap ten sinh vien can tim: ");
	fgets(nhapTen,sizeof(nhapTen),(stdin));
	nhapTen[strlen(nhapTen)-1]=NULL;
	sinhVien mangSv[10];
	char tam[30];
	int count=0;
	for(int i=0;i<n;++i){
		strcpy(tam,SV[i].tenSv);
		if(strstr(strupr(tam),strupr(nhapTen))){
			mangSv[count] = SV[i];
			++count;
		}
	}
	if(count>0){
			printf("   Ho Ten \t \t Diem Tin \t Diem Ngoai Ngu \t Diem Trung Binh \t Xep Loai");
			printf("\n \n------------------------------------------------------------------------------------------------- \n");
		for(int i=0;i<count;++i){
			printf("   %s %s \t %.1f \t \t %.1f \t \t \t %.1f \t \t \t %s \n", mangSv[i].hoDem, mangSv[i].tenSv, mangSv[i].diemTin, mangSv[i].diemNN, mangSv[i].diemTB, mangSv[i].xepLoai);
		}
	}else{
		printf("Error: Khong tim thay sinh vien !");
	}
}
int main(){
	int n;
	sinhVien SV[10];
	printf("- Nhap vao so sinh vien: ");
	scanf("%d",&n);
	getchar();
	inputThongTin(SV,n);
	printf("\n \n");
	printf("(*)Danh sach sinh vien cua lop \n");
	outputThongTin(SV,n);
	printf("\n \n");
	sinhVienThiLai(SV,n);
	printf("\n \n");
	sinhVienGioi(SV,n);
	printf("\n \n");
	sinhVienTbCaoNhat(SV,n);
	printf("\n \n");
	printf("(*) Danh sach sinh vien theo thu tu Alphabet \n");
	sinhVienSttAlphabet(SV,n);
	outputThongTin(SV,n);
	printf("\n \n");
	printf("(*) Danh sach sinh vien theo thu tu giam dan diemTB \n");
	sinhVienDiemTbGiam(SV,n);
	outputThongTin(SV,n);
	printf("\n \n");
	timSinhVien(SV,n);
}
