#include<stdio.h>
int main ()
{
    int i;
    int isPrime=1;
    printf("Enter a number");
    scanf("%d",&i);
     for(int j=2;j<i;j++)
    {
      if(i%j==0)
        {
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        printf("is Prime");
    }
    else
    {
        printf("is not prime");
    }
    return 0;
}
