#include<stdio.h>
int main()
{
    int number;
    printf("Enter Any Octal value: ");
    scanf("%o" , &number);
    printf("You Enter %o And the Hexa value is : %x" , number , number);

    return 0;
}
