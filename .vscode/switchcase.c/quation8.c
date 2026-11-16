// #include <stdio.h>

// int main()
// {

//     int num;
//     printf("enter your number:");
//     scanf("%d", &num);

//     switch (num)
//     {
//     case 1:
//         printf("piza");
//         break;

//     case 2:
//         printf("pasta");
//         break;

//     case 3:
//        printf("burger");
//        break;

//     default:
//        printf("not avaible");
//        break;

//     return 0;
//     }
// }

#include <stdio.h>
int main(){

    int a,b;
    char op;
    
    printf("enter a two number:");
    scanf("%d","%d",&a,&b);
    printf("enter a oprtaors(+,-,*,/):\n");
    scanf("%c",&op);

    switch(op)
    {
        case '+':
           printf("addition%d\n",a+b);
           break;

        case '-':
           printf("subtraction%d\n",a-b);
           break;

        case '*':
           printf("multiplication%d\n",a*b);
           break;

        case '/':
          printf("dividation%d\n",a/b);
          break;

    }
       return 0;
}