#include <stdio.h>

int main()

{
    float a;
    float pi;
    float perimeter;
    float area;
    printf ("radius is a");
    scanf ("%f",&a);
    pi = 3.14;
    area=pi*(a*a);
    perimeter=2*pi*a;
    printf("area is %f",perimeter);
    return 0;
}
