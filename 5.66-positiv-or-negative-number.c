#include<stdio.h>
int main()
{
    int a;
    printf("Enter A Number: ");

    scanf("%d" , &a);
    if(a>0)
    {
        printf("You Enter Positive Numbr!!!");
    }
    else{
        printf("You Enter Negative Number!!!");
    }

    return 0;
}
