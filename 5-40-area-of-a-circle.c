#include<stdio.h>
#include<math.h>
int main()
{
    float radius , area;
    printf("Enter the value of the radius: ");
    scanf("%f" , &radius);
    area = M_PI * (radius * radius);
    printf("The area of this circle is : %f " , area);

    return 0;
}
