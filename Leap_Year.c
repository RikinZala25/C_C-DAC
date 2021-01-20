//Accept a year from the user and check whether it is leap year or not

#include <stdio.h>

int main()
{
    int a;

    printf("Enter any Year :");
    scanf("%d", &a);

    if (a%4== 0)
    {
        printf("%d is an leap year \n",a);
    }

    else
    {
        printf("%d is a non Leap Year \n",a);
    }
    return 0;
}