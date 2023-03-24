#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter a Number: \n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index + 10);
        index = index + 10;
    } while (index < num);

    return 0;
}