#include<bits/stdc++.h>

using namespace std;

void Nhap_Mang(int a[], int &n) {
	cout <<"nhap phan tu: ";
	cin >> n;
	for(int i=0; i<n; i++) {
		cout << "nhap a["<< i << "]= ";
		cin >> a[i];
	}
}

float TBC (int a[], int n){
	int Tong = 0;
	for (int i = 0; i < n; i++) {
		Tong += a[i];
	}
	return (float)Tong/n;
}

float TrungBinhCongSoDuong (int a[], int n){
	int Tong = 0;
	int soluong=0;
	for (int i = 0; i < n; i++) {
		if(a[i]>= 0) {
			Tong += a[i];
			soluong++;
		}
	}
	return soluong>0 ? (float)Tong/soluong: -1;
}

int main() {	
	int a[100], n;
	Nhap_Mang(a, n);
	cout << "trung binh cong mang: " << TBC(a, n) << endl;
	float tbcsd = TrungBinhCongSoDuong(a, n);
	if(tbcsd > 0) {
		cout <<" trung binh cong so duong: " <<tbcsd << endl ;
	}else{
		cout <<"khong co so duong "<< endl ;
	}
}
