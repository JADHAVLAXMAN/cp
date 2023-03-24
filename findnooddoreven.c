#include<stdio.h>
int main()
{
    
    int i;
    printf("Enter a Number\n");
    scanf("%d", &i);

    if (i%2==0)
    {
        printf("The Number %d is Even", i);
    }
    else
    {
        printf("The Number %d is Odd", i);
    }
    printf("\n");
       
    return 0;
}
