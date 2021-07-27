#include<stdio.h>
int main()
{

    while(1)
    {
        char a;
        printf("Enter a character: ");
        scanf("%c", &a);
        if(a>='a' && a<='z')
        {
            printf("Small Letter");
        }
        else if(a>='A' && a<='Z')
        {
            printf("Capital Letter");
        }
        else
        {
            printf("Not a character please enter a character!!!");
        }

        return 0;
    }
}
