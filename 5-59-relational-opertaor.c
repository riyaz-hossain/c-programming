#include<stdio.h>
int main()
{
    int x;
    printf("Enter An Integer Number: ");
    scanf("%d", &x);
    if(x %2 ==0)
    {
        printf("You Enter Even Number!");
    }
    else
    {
        printf("You Enter Odd Number!!!");
    }
    return 0;
}
