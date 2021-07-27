#include<stdio.h>
int main()
{
    int year;
    printf("Enter The Year That You Want to check leap year or not:");
    scanf("%d", &year);
    if(year %400 == 0|| (year%4==0 && year%100!=0))
    {
        printf("You Enter Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}
