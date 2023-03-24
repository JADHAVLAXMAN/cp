#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d", &age);
    printf("Enter have Entered %d as Your Age\n", age);
    if (age>=18)
    {
        printf("You can Vote!");
    }
    else
    {
        printf("You cannot vote!");
    }
    
    return 0;
}