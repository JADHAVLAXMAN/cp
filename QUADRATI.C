#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float a,b,c,disc,x,x1,x2;
 clrscr();
 printf("\n enter value of a,b,c");
 scanf("%f%f%f",&a,&b,&c);
 disc=(b*b)-(4*a*c);
 if(disc<0)
{
 printf("\n roots cannot be calculated");
}
else if(disc==0)
{
 printf("\n roots are equal");
x=-b/(2*a);
printf("\n root =%f",x);
}
else
{
 printf("\n roots are different");
x1=(-b+sqrt(disc))/(2*a);
x2=(-b-sqrt(disc))/(2*a);
printf("\n root 1=%f",x1);
printf("\n root 2=%f",x2);
}
getch();
}