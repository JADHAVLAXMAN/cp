/* Calculating area of Triangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int b, h;
	float r;
	clrscr();
	printf("\n Enter Value of b: ");
	scanf("%d", &b);
	printf("\n Enter Value of h: ");
	scanf("%d", &h);
	r=0.5*b*h;
	printf("\n Area of Triangle :%f", r);
	getch();
}