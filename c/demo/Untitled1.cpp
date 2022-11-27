#include<stdio.h>

int reverse(int n){
	int tmp=0;
	while(n!=0){
		tmp = tmp*10+n%10;
		n/=10;
	}
	return tmp;
}

void tachSo(int n){
	int cpy = reverse(n);
	int count =0;
	while(cpy!=0){
		int cup = cpy%10;
		if(cup == 1)
			if(count == 0)	printf("Muoi ");
			else	printf("Mot ");	
		else if(cup ==2 )	printf("Hai ");
		else if(cup ==3 )	printf("Ba ");
		else if(cup ==4 )	printf("Bon ");
		else if(cup ==5 )
			if(count == 4)	printf("Lam");
			else	printf("Nam ");	
		else if(cup ==6 )	printf("Sau ");
		else if(cup ==7 )	printf("Bay ");
		else if(cup ==8 )	printf("Tam ");
		else if(cup ==9 )	printf("Chin ");
		
		++count;
		if(count == 2)		printf("Nghin ");
		else if(count ==3)	printf("Tram ");
		cpy/=10;
	}
}
int main(){
	int n;
	printf("Nhap so nguyen n co 5 chu so: ");
	scanf("%d",&n);
	tachSo(n);
}
