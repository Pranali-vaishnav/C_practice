#include <stdio.h>

int main()

{

    int a = 5;
    int b = 10;

    printf("adddition=%d\n", a + b);
    printf("subtraction=%d\n", a - b);
    printf("multiplication=%d\n", a * b);
    printf("division=%d\n", a / b);
    printf("module=%d\n", a % b);
    printf("increment=%d\n",++a);
    printf("increment=%d\n",a++);
    printf("decrement=%d\n",--a);
    

    // relational oprators

    printf("%d\n", a == b);
    printf("%d\n", a < b);
    printf("%d\n", a > b);
    printf("%d\n", a != b);
    printf("%d\n", a >= b);
    printf("%d\n", a <= b);

    // logical oprators

    printf(" a && b:%d\n", a && b);
    printf(" a || b:%d\n", a || b);
    printf("!a :%d\n", !a);

    // bitwise oprators

    printf("a & b:%d\n", a & b); 
    printf("a | b:%d\n", a | b);
    printf("a ^ b:%d\n", a ^ b);
    printf("a>>b:%d\n", a >> b);
    printf("a<<b:%d\n", a << b);

    // assignment oprators

    printf("a+=b:%d\n",a+=b);
    printf("a-=b:%d\n",a-=b);
    printf("a*=b:%d\n",a*=b);
    printf("a/=b:%d\n",a/=b);
    printf("a%=b:%d\n",a%=b);
    
    return 0;
}
