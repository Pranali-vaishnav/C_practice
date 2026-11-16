// #include <stdio.h>

// int main(){
//     int num;

//     printf("enter a number:");
//     scanf("%d",&num);

//     if (!(num%2!=0))
//     {
//         printf("even");
//     }
//     else
//     {
//         printf("odd");
//     }
//     return 0;
// }

// largest o three number
// #include <stdio.h>

// int main()
// {

//     int a = 4;
//     int b = 6;
//     int c = 5;

//     if (a > b & a >c)
//     {
//         printf("largest number a");
//     }
//     else if ( b>a & b>c)
//     {
//         printf("largest number b");
//     }
//     else
//     {
//         printf("largest number c");
//     }
//     return 0;
// }
//leap year chek
// #include <stdio.h>

// int main(){
//     int year;

//     printf("enter year:");
//     scanf("%d",&year);

//     if (year%4==0 || year%100==0 && year%400==0)
//     {
//         printf("the leap year");
//     }
//     else
//     {
//         printf("not leap year");
//     }
//     return 0;
// }

//check vowel consantant
// #include <stdio.h>
// int main(){

//     char ch;

//     printf("enter a character: ");
//     scanf("%c",&ch);

//     if ( ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//     {
//          printf("vowel");
//     }
//     else
//     {
//         printf("consanat");
//     }
//     return 0;
// }

//uppercase lowercase
#include <stdio.h>
int main(){

    char ch;

    printf("enter your character:");
    scanf("%c",&ch);
    
    if ( ch>='A' && ch<='Z')
    {
        printf("uppercase");
    }
    else if (ch>='a'&& ch<='z')
    {
        printf("lowercase");
    }
    else
    {
        printf("not character");
    }
    return 0;

}