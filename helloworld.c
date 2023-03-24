#include<stdio.h>
int main()
{
    int num=2, i, k;
    printf("Enter The Number:");
    scanf("%d, &i");
    printf("The Table of You Entered Number\n");
    for (i = 0; i <= 10; i++)
    {
        k=num*i;
        printf("%d\n",k);
    }   
}