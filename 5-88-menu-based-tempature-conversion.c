#include<stdio.h>
int main()
{
    int choice;
    while(1)
    {
        printf("1.Celsius To Fahrenheit\n");
        printf("2.Fahrenheit To Celsius  \n");
        printf("Enter Your Choice: \n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
        {
            float far,cel;
            printf("Enter Celsius Value : \n");
            scanf("%f", &cel);
            far = (1.8*cel) + 32;
            printf("The Fahrenheit Temp is : %f \n", far);
            break;
        }
        case 2:
        {
            float far,cel;
            printf("Enter Fahrenheit Value : \n");
            scanf("%f", &far);
            cel = (far - 32) / 1.8;
            printf("The Celsius Temp is : %f \n", cel);
            break;
        }
        default :
            printf("Not Found Temperature \n");

        }
    }

    return 0;
}
