#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, d;
    float res;
    printf("\n Enter Values of a, b, c, &d");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if((c-d)>0)
    {
        res=(a+b)/(c-d);
        printf("in Value of Ratio=%f", res);
    }

    if ((c-d)<=0)
    {
        printf("\n Ratio Not Calculated");
    }
    getch();
    
}