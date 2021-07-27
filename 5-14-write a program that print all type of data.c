#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;
    int e;

    a= 10;
    b="T";
    c= 1.0223;
    d= 13.13221;
    printf("This is int %d \n  this is character %c \n  This is Float Number %f \n", a,b,c);

    printf("Enter An Integer Number: ");
    scanf("%d" , & e);
    printf("You Enter =  %d" , e);


    return 0;
}
