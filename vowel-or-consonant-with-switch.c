#include<stdio.h>
int main()
{
    char a;
    printf("Enter A character That You Want To Check Vowel or Consonant: ");
    scanf("%c" , &a);
    switch(a)
    {
    case 'a' :
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }

    return 0;
}
