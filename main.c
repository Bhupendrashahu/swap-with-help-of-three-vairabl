#include<stdio.h>
#include<conio.h>
void main ()
{
int a,b,c;
printf("Enter the two no \n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("\n swap the no is =%d",a,b);
getch();
}
