#include<stdio.h>
void main()
{
int a=1,no,table=1;
printf("Enter any num: ");
scanf("%d",&no);
while(a<=10)
{
table=a*no;
printf("%d\n",table);
a++;
}
getch();
}