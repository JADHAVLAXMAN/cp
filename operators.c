#include<stdio.h>
int main()
{
    int a=21, b=10, c;
    c=a+b;
    printf("a=21, b=10\n");
    printf("Value of c is (c=a+b):%d\n", c);
    c=a-b;
    printf("Value of c is (c=a-b):%d\n", c);
    c=a*b;
    printf("Value of c is (c=a*b):%d\n", c);
    c=a/b;
    printf("Value of c is (c=a/b):%d\n", c);
    c=a%b;
    printf("Value of c is (c=a%b):%d\n", c);
    c=a++;
    printf("Value of c is (c=a++):%d\n", c);
    c=a--;
    printf("Value of c is (c=a--):%d\n", c);
    c=++a;
    printf("Value of c is (c=++a):%d\n", c);
    c=--a;
    printf("Value of c is (c=--a):%d\n", c);
    c=b++;
    printf("Value of c is (c=b++):%d\n", c);
    c=b--;
    printf("Value of c is (c=b--):%d\n", c);
    c=++b;
    printf("Value of c is (c=++b):%d\n", c);
    c=--b;
    printf("Value of c is (c=--b):%d\n", c);
    return 0;
}
