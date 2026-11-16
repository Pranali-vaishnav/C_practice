//  createood menu
#include <stdio.h>
int main()
{

    int num;
    printf("Enter your number;\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("pizza\n");
        break;

    case 2:
        printf("burguer\n");
        break;

    case 3:
        printf("pasta\n");
        break;

    case 4:
        printf("sandwitch\n");
        break;

    default:
        printf("invalid number\n");
        break;
    }
}