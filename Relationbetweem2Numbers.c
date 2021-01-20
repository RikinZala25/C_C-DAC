// Accept two numbers from the user and display their relationship (whether the first number is smaller/greater/equal to the second number)

#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);

    if (a>b)
    {
        printf("a is greater than b \n");
    }
    else if (a<b)
    {
        printf("a is less than b \n");
    }
    else 
    {
        printf("a is equal to b \n");
    }

    return 0;
}