#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("The size of this Integer = %d bytes \n" , sizeof(a));
    printf("The size of this Float = %d bytes\n" , sizeof(b));
    printf("The size of this Double = %d bytes\n" , sizeof(c));
    printf("The size of this Character = %d bytes\n" , sizeof(d));
    return 0;
}
