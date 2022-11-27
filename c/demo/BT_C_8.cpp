//#include<bits/stdc++.h>
//
//using namespace std;
//
//void Nhap_Mang(int a[], int &n){
//	cout << "nhap phan tu: ";
//	cin >> n;
//	for(int i = 0; i < n;i++){
//		cout << "nhap a[" << i << "]= ";
//		cin >> a[i];
//	}
//}
//
//void Xuat_Mang(int a[], int n){
//	for(int i = 0;i < n;i++){
//		cout << a[i] << "    ";
//	}
//}
//
//void Xoa_Phan_Tu(int a[], int &n, int ViTri){
//	for(int i = ViTri;i < n; i++){
//		a[i] = a[i + 1];
//	}
//	n--;
//}
//
//void Xoa_Cac_So_Chan(int a[], int &n){
//	for(int i = 0;i < n;i++){
//		if(a[i] % 2 == 0){
//			Xoa_Phan_Tu(a, n, i);	
//			i--;
//	 	}
//	}
//}
//
//int main(){
//   	int a[100], n, ViTri;
//	Nhap_Mang(a, n);
//	cout << "Mang vua nhap la: ";
//	Xuat_Mang(a, n);
//	Xoa_Cac_So_Chan(a, n);
//	cout << "\nxoa phan tu chan trong mang: ";
//	Xuat_Mang(a, n);
//}
