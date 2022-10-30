#include <stdio.h>

#define PI 3.14159
#define FRACTION 4.0f/3.0f

int main(void)
{
    int radius;
    printf("Enter radius to calculate volume of circle: ");
    scanf("%d", &radius);
    float volume = FRACTION * (PI * (radius * radius * radius));
    printf("%.2f\n", volume);
}
