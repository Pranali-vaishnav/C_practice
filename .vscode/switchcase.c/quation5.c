// create month 1 to 12
#include<stdio.h> 
int main()
{
    int month;

    printf("enter your month number:");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("janevary");
        break;

    case 2:
        printf("feburvery");
        break;

    case 3:
        printf("march");
        break;

    case 4:
        printf("april");
        break;

    case 5:
        printf("may");
        break;

    case 6:
        printf("june");
        break;

    case 7:
        printf("july");
        break;

    case 8:
        printf("august");

    case 9:
        printf("sptember");
        break;

    case 10:
        printf("octomber");
        break;

    case 11:
        printf("november");
        break;

    case 12:
        printf("december");
        break;

    default:
        printf("invalid");
    }
    return 0;
}