//Considering three numbers provided by the user as length of sides of a triangle, first check if the values are valid for representing the sides of a triangle (i.e. whether a triangle can be drawn using the given values). If the lengths of sides are valid, print the type of the triangle.
#include <stdio.h>

int main()
{
    int a,b,c;

    printf("a, b and c are the sides of triangle \n");
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    printf("Enter the value of c :");
    scanf("%d", &c);

    if (a==b && b==c)
    {
        printf("It is an Equliteral Triangle \n");
    }

    else if (a==b || b==c || c==a)
    {
        printf("It is an Isoceles Triangle \n");
    }

    else 
    {
        printf("It is an Scalene Triangle \n");
    }

    return 0;
}
