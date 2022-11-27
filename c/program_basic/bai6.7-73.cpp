#include <stdio.h>
#include <string.h>
int main(){
	int j,i,k;
	char a[30]; char kq[30], kq1[30], kq2[30];
		printf("nhap chuoi a:");
		fflush(stdin); gets(a);
 
 	//xoa dau cach o dau 
	for (i=0; i<strlen(a); i++){
   		if (a[i]!=' '){ 
			j=i;break;
	}
}
 		k=0;
	for (i=j; i<strlen(a); i++){ 
 		kq[k]=a[i];k++;
}
	// printf("kq=%s\n", kq); 
   
    //xoa dau cach o cuoi
	for (i=strlen(kq)-1; i>=0;i--){
   		if (kq[i]!=' '){ 
		j=i;break;
	}
}
		k=0;
	for (i=0; i<=j; i++){ 
		kq1[k]=kq[i];k++;
}
    
	// printf("kq=%s%s\n", kq1,"abc");  

  	//xoa dau cach o giua 
    	j=0;
	for (i=0; i<strlen(kq1)-1; i++){
   		if (kq1[i]!=' ' ){ 
			kq2[j]=kq1[i];
			j=j+1;
}	else
		if (kq1[i]==' ' && kq1[i+1]!=' '){ 
			kq2[j]=kq1[i];
			j=j+1;
	}
}
  printf("kq= %s", kq2);
}
