// Accept two numbers from the user and display the maximum number

#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("\nEnter value of b : ");
    scanf("%d", &b);

    printf("\nThe value of a = %d \n",a);
    printf("The value of b = %d \n",b);

    if (a<b)
    {
        printf("b is greater than a \n");
    }
    else
    {
        printf("\n a is greater than b \n");
    }

    return 0;
}