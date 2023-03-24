#include<stdio.h>
int main()
{
    int a=21, b=21;
    if (a==b)
    {
        printf("\n a is equal to b\n");
    }
    else
    {
        printf("a is not equal to b\n");
    }
    if (a<b)
    {
        printf("a is less than b\n");
    }
    else
    {
        printf("a is not less than b\n");
    }
    if (a>b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("a is not greater than b\n");
    }
    a=15;
    b=15;
    if (a>=b)
    {
        printf("a is either greater than of equal to b");
    }
    else
    {
        printf("a is nither greater than of not equal to b");
    }
    return 0;
}