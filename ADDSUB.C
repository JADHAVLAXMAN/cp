#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("\n enter the 2 no");
 scanf("%d%d",&a,&b);
 if(a>b)
 {
 printf("\n first number is greater than second no");
 c=a+b;
 printf("\n addition=%d",c);
 }
 else
 {
 printf("\n first no is less than second no");
 c=a-b;
 printf("\n substraction=%d",c);
 }
 getch();
}