#include<stdio.h>
int main()
{
    int a=5,b=10;
    printf("before Swap: a = %d \t b = %d \n" ,a,b );
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After Swap: a = %d \t b = %d ", a,b);
    return 0;
}
