#include<stdio.h>
int main()
{
    char ch;



        printf("Enter a Character that you want to check : \n");
        scanf("%ch", &ch);
        switch(ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'E':
        case 'A':
        case 'I':
        case 'O':
        case 'U':
        {
            printf("You Enter Vowel!!!\n\n\n");
            break;
        }
        default:
        {
            printf("You Enter Consonant!!!\n\n\n");
            break;
        }
        }


    return 0;
}
