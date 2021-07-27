#include<stdio.h>
int main()
{
    double num1, num2;
    char oper;
    printf("Enter a Operator (+ , - , x , /) : ");
    scanf("%c", &oper);
    printf("Enter Two Numbers : ");
    scanf("%lf %lf", &num1, &num2);

    switch(oper)
    {
    case '+':
    {
      printf("Summation of two %.2lf + %.2lf = %.3lf",num1,num2, (num1+num2) );
        break;
    }
    case '-':
    {
        printf("Subtraction of two %.2lf + %.2lf = %.3lf",num1,num2, (num1-num2) );
        break;
    }
    case '*':
    {
        printf("Multiplication of two %.2lf + %.2lf = %.3lf",num1,num2, (num1*num2) );
        break;
    }
    case '/':
    {
        printf("Division of two %.2lf + %.2lf = %.3lf",num1,num2, (num1/num2) );
        break;
    }
    default:
        printf("Please Enter a Valid Operator!!!");
    }
    return 0;
}
