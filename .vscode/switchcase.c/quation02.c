//create  calculator using switch case

#include <stdio.h>
int main()
{
    int a,b;
    char op;

    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("enter oprators(+,-,*,/):\n");
    scanf(" %c",&op);

    switch(op){

    case '+':
        printf("addition=%d\n",a+b);
        break;

    case '-':
        printf("subtraction=%d\n",a-b);
        break;

    case '*':
        printf("multiplication=%d\n",a*b);
        break;

    case '/':
        printf("division=%d\n",a/b);
        break;

    default:
        printf("invalid oprator\n");
        break;
    }
    return 0;
}



