#include<stdio.h>
int main()
{

    int digit;
    printf("Enter A digit that you want to spell: ");
    scanf("%d", &digit);
    switch(digit)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;

    default:
        printf("No Value");
    }

    return 0;
}
