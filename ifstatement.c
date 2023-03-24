#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d", age);
    printf("You Have Entered %d as Your age\n", &age);
    if (age>18)
    {
        printf("YOu can vote");
    }
    
    return 0;
}
