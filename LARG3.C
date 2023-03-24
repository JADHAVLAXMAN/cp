#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, l, c;
	clrscr();
	printf("\n Enter Three Number's: ");
	scanf("%d%d%d", &a, &b, &c);
	l=((a>b)?((a>c)?a:c):((b>c)?b:c));
	printf("\n The Largest No is =%d", l);
	getch();
}