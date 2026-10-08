#include<stdio.h>
int main ()
{
    int cp,sp;
    printf("enter the cost price and selling price");
    scanf("%d%d", &cp, &sp);
    if (cp>sp)
    {
        printf("%d is loss");
    }
    else
    {
        printf("%d is profit");
    }
    return 0;
}

