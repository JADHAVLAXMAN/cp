#include<stdio.h>
#include<conio.h>
void main()
{
	unsigned long int n;
	int r, sum=0;

	printf("\n Enter a No:");
	scanf("%ld", &n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("\n Sum of Digits= %d", sum);
	getch();
}