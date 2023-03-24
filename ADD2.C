/*Addition of Two Numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float a, b, res;
	clrscr();
	printf("\n Enter Two Numbers:");
	scanf("%f%f", &a, &b);
	res=a+b;
	printf("\n The Addition of Two Numbers You have Enterd is:%f", res);
	getch();
}