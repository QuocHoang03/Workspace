#include<iostream>

using namespace std;

// nhap mang
void NhapMang(int &n,int a[]){
	   cout << "nhap phan tu : ";
	   cin >> n;
	   for(int i = 0;i < n; i++){
	   	   cout<<"nhap a["<< i <<"] : ";
	       cin>> a[i];
	   }
}
// xuat mang
void XuatMang(int n,int a[]){
	   cout << "mang vua nhap la : " << endl;
	   
	   for(int i = 0;i < n; i++){
	       cout<< a[i] << " " ;
	   }
}
// uoc chung lon nhat cua 2 so nguyen
int UCLN(int a, int b){
	while(a != b){
		if(a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return a;
}
//tim uoc chung lon nhat trong mang
int UCLN_Mang(int n, int a[]){
	int x = a[0];  // cho gia tri ucln cua phan tu dau tien
	for(int i = 1;i > n;i++){ // chay vong lap tu phan tu so 1 
		x = UCLN(x, a[i]);    // tìm uoc chung lon nhat cho tung phan tu trong mang bat dau tu phan tu so 1 sau moi lan lap thanh cong thi cap nhat lai x , xong return gia tri cua no la x là ucln 
	}
	return x;
}

int main(){
	int a[100], n;
	NhapMang(n, a);
	XuatMang(n, a);
	cout <<endl<< "UCLN cac phan tu trong mang la: "<< UCLN_Mang(n, a) << endl;
return 0;
}
