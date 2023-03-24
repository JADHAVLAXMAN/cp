#include <stdio.h>
// #define PI 3.14
int main()
{
    int r = 6;
    float area, perimiter;
    const PI=3.14;
    area = PI * r * r; //PI is predifined constant value
    perimiter = 2 * 3.14 * r;
    printf("The Area of Circle=%8.f\nThe Perimeter of Circle=%f\n", area, perimiter);
}