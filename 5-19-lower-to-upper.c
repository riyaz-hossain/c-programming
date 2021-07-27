#include<stdio.h>
int main()
{
    char lower;

    printf("Enter A Lower Case Letter : " );
    scanf("%c" , &lower);
    printf("You Enter : %c and the Uppercase is : %c " , lower , (lower -32 ) );

    return 0;
}
