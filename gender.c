//Program Name:- if-else with OR operator (demo-4).
#include <stdio.h>
     void main()
    {
    char gen;
    printf("Are you is a Male (y/n):-");
    scanf("%c",&gen);
    if(gen=='y' || gen=='Y')
    {
    printf("Gender : Male");
    }
    else
    {
    printf("Gender : Female");
    }
}