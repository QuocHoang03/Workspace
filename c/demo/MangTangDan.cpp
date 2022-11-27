#include<bits/stdc++.h>

using namespace std;

//int HoanVi(int &a, int &b) {
// 	int temp = a;
// 	a = b;
// 	b = temp;
// }
  void NhapMang (int a[], int &n) {
 	cout << " nhap phan tu : ";
 	cin >> n;
 	for(int i = 0; i < n; i++) {
		cout <<"nhap a["<< i <<"]= ";
		cin >> a[i]; 	
	}
 }
void MangTangDan(int a[], int n) {
 	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++) {
			if(a[i] >= a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		} 
	}
 }

 
 void XuatMang(int a[], int n) {
 	cout << "mang vua nhap la: ";
 	for(int i=0;i<n;i++) {
		cout << a[i] << " "; 
	}
 }
 
 
 
int main() {
	int a[100], n;
	NhapMang(a, n);
	MangTangDan(a,n);
	cout <<endl<< "mang sau khi tang dan: ";
	XuatMang(a, n);
	 
}
