#include <stdio.h>

int main()
{

    int num;

    printf("enter a number:");
    scanf("%d", &num);

    if (num%3==0 && num%5==0)
    {
        printf("3 and 5 are divisible");
    }
    else
    {
        printf("3 and 5 are not divisibe");
    }
    return 0;
}
