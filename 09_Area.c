#include <stdio.h>
#include <math.h>
int main()
{
    char opt;
    float radius;
    float s1,s2;
    printf("Calculate Area\n");
    printf("Select shape.\n 1.Circle.\n 2.Square.\n 3.Rectangle.\n");
    scanf("%c", &opt); //get operator

    switch (opt) 
    {
    case '1':
        
        printf("Enter radius:\n");
        scanf("%f", &radius); //Get radius
        printf("Area of Circle = %f", ((22 * radius * radius) / 7));
        break;
    case '2':
        
        printf("Enter sides of Square:\n");
        scanf("%f %f", &s1, &s2); //Get sides of square
        printf("Area of Square = %f", s1 * s2);
        break;
    case '3':
        
        printf("Enter sides of Rectangle:\n");
        scanf("%f %f", &s1, &s2); //Get sides of rectangle.
        printf("Area of Rectangle = %f", s1 * s2);
        break;

    default:
        printf("Invalid option");
    }
    return 0;
}