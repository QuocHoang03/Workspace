#include<iostream>

using namespace std;

int Nguoc_Dao(int n){
	int SoDao=0;
	while(n!=0){
		SoDao = SoDao * 10 + n % 10;
		n/=10;
	}
	return SoDao;
}
int main (){
	int n, dem=0;
	cout << " nhap vao 5 so nguyen : ";
	cin >> n;
	int TA = Nguoc_Dao(n);
	while(TA!=0){
		++dem;
		int tam = TA % 10;
		
		//so 1 co truong hop dung dau va sau
		if(tam == 1 && dem==1)	cout << "muoi ";
		else if(tam == 1)	cout << "mot ";
		
		
		if(tam == 2)	cout << "hai ";
		if(tam == 3)	cout << "ba ";
		if(tam == 4)	cout << "bon ";
		if(tam == 5)	cout << "nam ";
		if(tam == 6)	cout << "sau ";
		if(tam == 7)	cout << "bay ";
		if(tam == 8)	cout << "tam ";
		if(tam == 9)	cout << "chin ";
		
//		in ra o don vi nao
		if(dem == 2)	cout << "nghin ";
		if(dem == 3)	cout << "tram ";
		if(dem == 4)	cout << "muoi ";
		TA/=10;
	}
}

