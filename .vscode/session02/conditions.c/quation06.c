//calculte  student gradebased marks
#include <stdio.h>
int main(){
   
    int marks;

    printf("enter a stdent marks:");
    scanf("%d",&marks);

    if (marks>=90 && marks<=100)
    {
        printf("grade A");
    }
    else if (marks>=80)
    {
        printf("grade B");
    }
    else if (marks>=70)
    {
        printf("grade C");
    }
    else
    {
        printf("grade d");
    }
}