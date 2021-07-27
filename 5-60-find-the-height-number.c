//compare 3 numbers and found the largest number

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The Three Numbers:  ");
    scanf("%d%d%d" , &a,&b,&c);
    printf("You Enter %d \t%d \t%d \n\n\n" , a,b,c);
    if(a>b && a>c)
    {
        printf("and %d is the largest Number" , a);
    }
    else if(b>a && b>c)
    {
        printf("and %d is the largest Number" , b);
    }
    else
    {
        printf("and %d is the largest Number" , c);
    }

    return 0;
}
