//Calxulating the volume and area of cylinder
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, volume, surfaceArea;

    // Prompt the user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * (radius + height);

    // Display the results
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surfaceArea);

    return 0;
}
