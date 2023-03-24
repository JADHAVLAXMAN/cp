#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	clrscr();
	printf("\n Enter Three Number's: ");
	scanf("%d%d%d", &a, &b, &c);
	if((a>b) &&(a>c))
	{
		printf("\n The Largest No is =%d", a);
	}
	else if((b>a)&&(b>c))
	{
		printf("\n The Largest No is =%d", b);
	}
	else
	{
	printf("\n The Largest No is =%d", c);
	}
	getch();
}