#include<stdio.h>
int main()
{

    int num1,num2,temp;
    printf("Enter Two Numbers : ");
    scanf("%d %d", &num1,&num2);
    printf("Before Swap : a = %d \t b=%d \n", num1, num2);
    temp = num1;
    num1= num2;
    num2 = temp;
    printf("After Swap a = %d \t b= %d ", num1,num2);


    return 0;
}
