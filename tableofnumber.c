#include <stdio.h>
int main()
{
    int num, i, k;
    printf("Enter the Number:");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        k = num * i;
        printf("%d\n", k);
    }
    return 0;
}
