#include<stdio.h>
void main()
{
   int unit, amount;
   printf("Enter Unit:-");
   scanf("%d",&unit);
   if(unit<=100)
    {
    amount =unit*3;
    }
    else
    {
    amount =unit*5;
    }
    printf("Your Electricity Bill Amount is:-%d", amount);
 }
