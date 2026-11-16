// create atm menu
#include <stdio.h>
int main()
{

    int choice;

    printf("\n1.check balance");
    printf("\n2.deposite money");
    printf("\n3. withdraw money");
    printf("\n.exit");

    printf("enter your choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("your balance is 5000");
        break;

    case 2:
        printf("money deposite 1000");
        break;

    case 3:
        printf("moneny withdraw 100");
        break;

    case 4:
        printf("thank you");
        break;

    default:
        printf("invalid choice");
        break;
    }
    return 0;
}