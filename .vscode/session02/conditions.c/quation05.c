//check divsible 5 and 11
#include <stdio.h>

int main(){

    int num;

    printf("enter a number:");
    scanf("%d", &num);

    if (num %5==0 && num %11==0)
    {
        printf("number is divisible by 5 and 11");
    }
    else
    {
        printf("number is not divisible 5 and 11");
    
    }
    return 0;

}