#include<stdio.h>
int main()
{
    int i=0;
    show:
        printf("%d\n" , i);
        i++;
        if(i<=5)
            goto show;

    return 0;
}
