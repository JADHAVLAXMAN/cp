#include<stdio.h>
void main()
{
    int n, i, sum=0;
    float avg;
    printf("Enter The Number:");
    scanf("%d", &n);
    for ( i = 0; i <= n; i++)
    {
        sum+=i;
    }
    avg=sum/n;
    printf("The Sum is %d:\n", sum);
    printf("The Average of No of %d:\n", avg);
}