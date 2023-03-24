#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a Number:");
    scanf("%d", &n);
    for (i = 0; i <=n; i++)
    {
        if (i%2==0)
        {
            printf(":%d\n",i);
        }
        else
        {
            continue;
        }
        printf("\n");
    }
    if (i>2)
    {
        
    printf("The Even Number Under %d is %d\n", n, i/2);
    }
    else
    {
        printf("The Even Number Under %d is 1\n", n, i);
    }
    
    
}