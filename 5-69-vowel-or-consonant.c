#include<stdio.h>
int main()
{
    char a;
    printf("Enter A Character: ");
    scanf("%c", &a);
    if(a=='a' || a=='e' || a=='i' ||a=='o' || a=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("You Enter Consonant");
    }


    return 0;
}
