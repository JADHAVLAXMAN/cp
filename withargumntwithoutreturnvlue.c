#include <stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*'); 
    }
    
    printf("%c", '*');
}


int takenumber()
{
    int i;
    printf("Enter a Number: ");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    // c = sum(a, b);
    // printstar(10);
    c = takenumber();
    // printf("The Number Entered is %d\n", c);
    printf("The Number Entered number is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}