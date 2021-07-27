#include<stdio.h>
int main()
{
    float a , c;

    printf("Enter the value of Farenhit Scale Value: ");
    scanf("%f" , &a);
    c= ((5*(a-32))/9);
    printf("The Celcius value is : %.3f" , c);
    return 0;
}
