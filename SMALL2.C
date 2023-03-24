#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	clrscr();
	printf("\n Enter Three Number's: ");
	scanf("%d%d%d", &a, &b, &c);
	if(a<b)
	{
		if(a<c)
		{
			printf("\n The Smallest No is =%d", a);
		}
		else
		{
			printf("\n The Smallest No is =%d", c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("\n The Smallest No is =%d", b);
		}
		else
		{
			printf("\n The Smallest No is =%d", c);
		}
	}
	getch();
}