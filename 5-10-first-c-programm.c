//

#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter Your First Semester Result: ");
    scanf("%f", &a);
    printf("Enter Your Second Semester Result: ");
    scanf("%f", &b);
    printf("Enter Your Third Semester Result: ");
    scanf("%f", &c);
    printf("Enter Your Fourth Semester Result: ");
    scanf("%f", &d);

    float aveFirst = (a *5 ) / 100;
    float aveSecond = (b *5 ) / 100;
    float aveThird = (c *5 ) / 100;
    float aveFourth = (d *10 ) / 100;
    printf("Your CGPA   =  %f" , (aveFirst + aveSecond + aveThird + aveFourth ));



    return 0;
}
