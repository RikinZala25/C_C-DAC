//Enter value of principal, number of years and rate of interest to get simple interest.
#include<stdio.h>
#include<math.h>

int main()

{
    float p,r,n;

    printf("Enter Principal amount = ");
    scanf("%f",&p);
    printf("\nEnter Rate of Interest = ");
    scanf("%f",&r);
    printf("\nEnter Number of Years = ");
    scanf("%f",&n);

    
    printf("\n Simple Interest is %f",(p*r*n/100));
    printf("\n Compound Interest is %f \n",p*pow((1+r/100), n));

    return 0;
}