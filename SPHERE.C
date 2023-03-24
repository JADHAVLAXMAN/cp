#include<stdio.h>
#include<conio.h>
void main()
{
	float a, r, v;
	clrscr();
	printf("\n Enter the Value of r");
	scanf("%f", &r);
	a=4*3.14*r*r;
	v=4.0/3* 3.14*r*r*r;
	printf("\n The area of sphere:%f", a);
	printf("\n The Volume of Sphere :%f", v);
	getch();
}