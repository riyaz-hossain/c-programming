#include<stdio.h>
int main()
{
    int a , b,area;

    printf("Enter the value of base and height: ");
    scanf("%d%d" , &a,&b);
    area = .5*a*b;
    printf("The area of this Triangle is : %d" ,area);

    return 0;
}
