#include<stdio.h>
int main()
{
    int a=1, b=0;
    if (a&&b)
    {
        printf("Condition is True\n");
    }
    else
    {
        printf("Condition is False\n");
    }
    a=1;
    b=0;
    if (a&&b)
    {
        printf("Condition is True\n");
    }
    else
    {
        printf("Condition is False\n");
    }
    a=1;
    b=0;
    if (!(a&&b))
    {
        printf("Condition is True\n");
    }
    else
    {
        printf("Condition is False\n");
    }
    
    
    return 10;
}
