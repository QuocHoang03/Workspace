#include<bits/stdc++.h>

using namespace std;

void NHapMang(int a[], int &n) {
	cout <<"nhap phan tu: ";
	cin >> n;
	for(int i = 0;i < n; i++) {
		cout <<"nhap a["<< i <<"]= ";
		cin >> a[i];
	}
}

void XuatMang (int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int TimKiem (int a[], int n) {
	int kq=0,tk;
	cin >> tk;
	for(int i = 0; i < n; i++) {
		if(a[i] == tk){
			kq = 1;
			return 1;
		}
	}return kq;
}

int main() {
	int a[100], n;
	NHapMang(a, n);
	cout << "mang vau nhap la: ";
	XuatMang(a, n);
	cout << "\nnhap phan tu can tim: ";
	if(TimKiem(a, n)==1){
		cout << "tim thay!";
	}else{
		cout << "khong tim thay!";
	}
	
}
