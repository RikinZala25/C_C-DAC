//Convert temperature into celcius,kelvin and farentheit.

#include<stdio.h>

int main()
{
    float a;

    printf("Enter Temperature in Celcius = ");
    scanf("%f", &a);

    printf("Temperature in Celcius is %f",a);
    printf("\n Temperature in Kelvin is %f",a+273.15);
    printf("\n Temperature in Farenheit is %f",(a*9/5)+32);

    return 0;
}