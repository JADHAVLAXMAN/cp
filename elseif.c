#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    printf("You have Entered %d as Your Age\n", age);
    if (age>=18)
    {
        printf("You can Vote!");
    }
    else if (age>=10)
    {
        printf("You are between 10 to 18 and you can vote for Kids\n\a");

    }
    else if (age>=3)
    {
        printf("You are between 3 to 10 and you can vote for Babies\n");

    }
    
    else
    {
        printf("You cannot Vote!");
    }
    
    return 0;
} 