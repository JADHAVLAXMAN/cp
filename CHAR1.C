#include<stdio.h>
#include<conio.h>
void main()
{
 char lr;
 clrscr();
 printf("\n enter the Charecter:\n");
 scanf("%c", &lr);
 if((lr>=65)&&(lr<=90))
 printf("\n it is uppercase letter");
 else if((lr>=97)&&(lr<=122))
 printf("\n it is lowercase letter");
 else if((lr>=48)&&(lr<=57))
 printf("\n it is digit");
 else
 printf("\n special symbol");
 getch();
}