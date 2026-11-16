// create signal sysytem
#include <stdio.h>
int main()
{

    char choice;
    printf("enter your choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("red- stop");
        break;

    case 2:
        printf("yellow- wait");
        break;

    case 3:
        printf("green- go");
        break;

    default:
        printf("invalid choice");
    }
    return 0;
}