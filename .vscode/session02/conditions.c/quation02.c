// largest three number
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 7;
    int c = 4;

    if (a > b&&a > c)
    {
        printf("a is the largest");
    }
    else if(b>a && b>c)
    {
        printf("b is the largest");
    }
    else
    {
        printf("c is the largest");
    }
    return 0;
}