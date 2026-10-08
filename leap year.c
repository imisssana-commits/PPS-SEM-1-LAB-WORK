#include<stdio.h>
int main()
{
    int year;
    printf("Enter The Year");
    scanf("%d", &year);
    if(year %100==0)

    if(year %400==0)
    {
       printf("display leap year");
    }
    else{
        printf("display not a leap year");
    }
    else if(year %4==0)
    {
        printf("display leap year");
    }
    else{
        printf("display not a leap year");
    }
    return 0;
}
