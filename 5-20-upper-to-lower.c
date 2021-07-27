#include<stdio.h>
int main()
{
    char upper;
    printf("Enter a Uppercase Character: ");
    scanf("%c" , &upper);
    printf("You Enter UpperCase: %c \nthe LowerCase Of Your Enter is : %c" , upper , (upper +32));
    return 0;
}
