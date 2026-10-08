#include<stdio.h>
int main()
{
    int a ;
    printf("Type a Number");
    scanf("%d", &a);
    if(a > 0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
    return 0;
}
