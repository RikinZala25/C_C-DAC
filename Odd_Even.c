//Accept a number from the user and check whether it is odd or even.

#include <stdio.h>

int main()
{
    int a;

    printf("Enter any Number :");
    scanf("%d", &a);

    if (a%2== 0)
    {
        printf("%d is an Even Number \n",a);
    }

    else
    {
        printf("%d is an Odd Number \n",a);
    }

    return 0;
}
