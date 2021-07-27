//take user input from user that show you x^y

#include<stdio.h>
int main()
{
    double x, y;
    printf("Enter the value of x and y: ");
    scanf("%lf %lf" , &x , &y);
    double result = pow(x,y);
    printf("The Result is %.0lf ^ %.0lf = %.2lf" , x,y,result);



    return 0;
}
