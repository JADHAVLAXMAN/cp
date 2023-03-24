#include<stdio.h>
int main()
{
    int gift;
    printf("Enter Your passed Subjects:\n");
    scanf("%d", &gift);
    printf("You Have Entered %d\n");
    
    if (gift=100)
    {
        printf("You Have Entered %d Then You will get 15 Rupees becouse You Passed in Math");

    }
    else if (gift=20)
    {
        printf("You Have Entered %d Then You will get 15 Rupees becouse You Passed in Science");

    }
    else if (gift=30)
    {
        printf("You Have Entered %d Then You will get 45 Rupees becouse You Passed in Both Subject's");

    }
    else
    {
        printf("You Entered Wrong Number\n Please Try Again Later");

    }
    
    return 0;
}
