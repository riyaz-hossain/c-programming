#include<stdio.h>
int main()
{
    while(1){
        int marks;
    printf("Enter Your Marks: ");
    scanf("%d" , &marks);
    if(marks<0 || marks>100)
    {
        printf("You Enter Invalid Marks!");
    }
    else if(marks>=80 && marks<=100)
    {
        printf("A+");
    }
    else if(marks>=70 && marks<=79)
    {
        printf("A");
    }
    else if(marks>=60 && marks<=69)
    {
        printf("A-");
    }
    else if(marks>=50 && marks<=59)
    {
        printf("B");
    }
    else if(marks>=40 && marks<=49)
    {
        printf("C");
    }else if(marks>=33 && marks<=40)
    {
        printf("D");
    }
    else{
        printf("You Fail the exam!!!");
    }
    }


    getch();
}
