//Enter the value of radius and height and give the area of circle and volume of cylinder.

#include<stdio.h>

int main()
{
    float a,c;
    float b = 3.14;
    
    printf("Enter the radius = ");
    scanf("%f", &a);

    printf("\nEnter the height = ");
    scanf("%f", &c);

    printf("\nThe area of your circle is %f ", b*a*a);

    printf("\nThe volume of your cylinder is %f \n", b*a*a*c);
    return 0;
}