#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n Enter a Number: ");
	scanf("%d", &n);
	if(n<=0)
	{
		if(n==0)
		{
		printf("\n You  Entered 0");
		}
		else
		printf("\n You Entered a negative Number.");
	}
	else
	{
	printf("\n You Entered a Positive Number.");
	}
	getch();
}
