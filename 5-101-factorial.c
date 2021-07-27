#include<stdio.h>
int main()
{
    int n,i,fact = 1;
    printf("Enter The Value of Factorial that you Want : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }
printf("The Factorial of %d = %d" , n , fact);

    return 0;
}
