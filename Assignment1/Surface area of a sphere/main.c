#include <stdio.h>
#include <stdlib.h>

// Define the value of PI as a constant
#define PI 3.14159

int main()
{
    double radius, surfaceArea;

    // Ask the user to enter the radius of the sphere
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Formula for surface area of a sphere: 4 * PI * r^2
    surfaceArea = 4 * PI * radius * radius;

    // Display the result
    printf("The surface area of the sphere is: %.2lf\n", surfaceArea);

    return 0;
}
