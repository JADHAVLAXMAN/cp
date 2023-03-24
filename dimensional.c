#include <stdio.h>
void main()
{
    int disp[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enteer Value Displaced for [%d][%d]:", i, j);
            scanf("%d.%d", &disp[i][j]);
        }
    }
    printf("Two Dimentional Array Element\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("i%d\n", disp[i][j]);
            if (j == 2)
            {
                printf("\t\n");
            }
        }
    }
}