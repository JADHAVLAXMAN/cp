/* Simple Interest */
#include<stdio.h>
#include<conio.h>
void main()
{
	float p, r, t, pi, ta;
	clrscr();
	printf("\n Enter the Principal, rate of Interes and No. of Year:");
	scanf("%f%f%f", &p, &r, &t);
	pi=p*r*t/100;
	ta=pi+p;
	printf("\n The Interest is %f", pi);
	printf("\n The Total Amount is %f", ta);
	getch();
}