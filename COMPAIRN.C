#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	clrscr();
	printf("\n Enter Two Numbers: ");
	scanf("%d%d", &a, &b);
	if (a>b)
	{
		printf("\n A is Greater than B");
	}
	else
	{
		printf("\n B is Greater than A");
	}
	getch();
}