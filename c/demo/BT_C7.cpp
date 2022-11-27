#include<bits/stdc++.h>

using namespace std;

void Nhap_mang(int &n, int a[]){
	cout << "nhap phan tu: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << "nhap a["<< i <<"] = ";
		cin >> a[i];
	}
}

void Xuat_mang(int n, int a[]){
	for(int i = 0; i < n;i++){
		cout << a[i] << " ";
	}
}

void Hoan_vi(int &x, int &y){
	int b = x;
	x = y;
	y = b;
}

int Kiem_Tra_so_Nguyen_To(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2; i <= n/2;i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

void SapXep_Mang_Tang_Dan(int n, int a[]){
	for(int i = 0; i < n-1;i++){
		if(Kiem_Tra_so_Nguyen_To(a[i])){
			for(int j = i + 1; j < n;j++){
				if(Kiem_Tra_so_Nguyen_To(a[j]) && a[i] > a[j]){
					Hoan_vi(a[i], a[j]);
				}
			}
		}
	}
}
//[1,2,4]
//float tinh_avg_khoang_cach(int n, int a[]){
//	float temp = a[0];
//	float sum = 0;
//	for(int i = 1;i < n;i++){
//		sum += a[i] - temp;
//		temp = a[i];
//	}
//	return sum/(n-1);
//}

int main() {
	int a[100], n;
	Nhap_mang(n, a);
	cout << "mang vua nhap la: ";
	Xuat_mang(n, a);
	SapXep_Mang_Tang_Dan(n, a);
	cout << "\nmang tang dan khong doi vi tri la: ";
	Xuat_mang(n, a);
	return 0;
}
