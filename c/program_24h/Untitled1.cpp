#include <stdio.h>
#include <conio.h>
main ()
{
int n,t=0;
do
{
printf ("nhap n: ");
scanf ("%d",&n);
t = t + n;
}while(n!=0);
printf ("tong = %d",t);
getch ();
}
