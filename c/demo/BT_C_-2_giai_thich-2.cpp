#include<iostream>

using namespace std;

int main(){
	int SL = 0;
	for(int i = 0; i <= 200; ++i){
		for(int j = 0; j <= 100; ++j){
			for(int k = 0; k <= 40; ++k){
				if(i*1000 + j*2000 + k*5000 ==200000){
					cout << i <<"  : to 1000, --- "<< j <<" : to 2000, ---  "<< k <<"  : to 5000 " << endl;
					SL++;
				}
			}
		}				
	}		
	cout << "\n------------------------------------------\n";		
	cout << "co tat ca " << SL << " phuong an co the. " << endl;
	return 0;
}
/*
   Giai thich daon code:
   khai bao bien dem de dung vong for
   
    dau tien se khoi tao 3 vong for cho 3 menh gia 1000, 2000, 5000.
    
    vong for dau tien là mênh gia 1000, dieu kien i <= 200 tai vì tong la 200000 nên chi dc 200 to 1000 neu hon thì qua so quy dinh (200000 / 1000 = 200)
    
    vong for thu hai là mênh gia 2000, dieu kien j <= 100 tai vì tong la 200000 nên chi dc 100 to 2000 neu hon thì qua so quy dinh (200000 / 2000 = 100)

	vong for thu ba là mênh gia 5000, dieu kien k <= 100 tai vì tong la 200000 nên chi dc 40 to 5000 neu hon thì qua so quy dinh (200000 / 5000 = 40)
	
	dung if tong 3 menh gia tien == 200000;
		xuat ra cac cach de tong 3 menh gia = 200000;

    
   
*/
