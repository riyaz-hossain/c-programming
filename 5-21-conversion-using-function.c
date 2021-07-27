#include<stdio.h>
int main()
{
    char lower , upper ;
    printf("Enter a Lower Case value: ");
    scanf("%c" , &lower);
    upper = toupper(lower);
    printf("The Uppercase is : %c" , upper);
    return 0;
}
