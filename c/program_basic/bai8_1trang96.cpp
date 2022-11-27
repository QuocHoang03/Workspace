#include <iostream>
using namespace std;
#include<stdio.h>
#include<string.h>

struct SinhVien {
	char HoTen[15];
	char quequan[10];
	char xeploai;
	float diemtb;
};

int main() {

	int n,i; char ht[15], qq[10],xl;float diem;
	
	cout << "\t nhap vao so sv: ";    cin >> n;
	FILE* fIn = fopen("sinhvien.txt", "w");
	
	for (i=1;i<=n;i++)
		{
			cout << "\t Ho ten sv: ";  fflush(stdin); gets(ht);  
			cout << "\t Que quan sv: ";  fflush(stdin); gets(qq);  
			cout << "\t Diem TB: ";  cin>>diem;  
			if (diem<5)
				xl='D';
			else
				if (diem<6.5)
				xl='C';
				else
					if (diem<8)
					xl='B';
					else
					xl='A';	
					
			fprintf(fIn, "%-15s %-10s %-3.1f %-1c\n",ht,qq,diem,xl);				
		}
	fclose(fIn);
		
	cout << "\n In danh sach sv\n"; 
	FILE* fOut = fopen("sinhvien.txt", "r");
		
	if(fOut) {
		for (i=1;i<=n;i++)
	   	{
		if (feof(fOut)) 
		{break;}
		fscanf(fOut,"%15[^\n] %10[^\n] %3f %c\n",ht,qq,&diem,&xl); 
		  
		printf("%-15s %-10s %-3.1f %-1c\n",ht,qq,diem,xl);							 
		}
	}
	
	fclose(fOut);

	return 0;
}

