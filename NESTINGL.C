#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,p=1;
	clrscr();
	for(r=1;r<=8;r++)
	{
		for(c=1;c<=r;c++)
		{
		 printf("%d\t",p);
		 p++;
		}
	printf("\n");
	}
	getch();
}