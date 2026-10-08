#include <stdio.h>

int main()

{
    float a;
    float b;
    float c;
    float average;
    printf ("entre the 1st number : ");
    scanf ("%f", &a);
    printf ("entre the 2nd number : ");
    scanf ("%f", &b);
    printf ("entre the 3rd number : ");
    scanf ("%f", &c);
    average = (a+b+c)/3;
    printf ("the average is : %f",average);
    return 0;
}
