#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,denta,x1,x2;
    printf("\n nhap a:");
    scanf("%f",&a);
    printf("\n nhap b:");
    scanf("%f",&b);
    printf("\n nhap c:");
    scanf("%f",&c);
    denta=b*b-4*a*c;
    if(denta<0){
        printf("NO");
    } else if(denta==0){
        printf("\n INF");
    } else if(denta>0){
        x1=(-b+sqrt(denta))/2*a;
        x2=(-b-sqrt(denta))/2*a;
        printf("\n 2 nghiem cua phuong trinh la: %.2f %.2f",x1,x2);
    }

}
