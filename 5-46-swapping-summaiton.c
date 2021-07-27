#include<stdio.h>
int main()
{
    int a = -15,b=10;
    printf("before swap : a= %d \t b = %d\n" , a,b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After Swap: a=  %d \t b = %d",a,b);
    return 0;
}
