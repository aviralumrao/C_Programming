//program to calculate area and circumference of a circle
#include <stdio.h>
int main()
{
    double r, area, circumf;
    printf("Input the radius of the circle : ");
    scanf("%lf", &r);

    // calculations
    area = 3.14 * r * r;
    circumf = 2 * 3.14 * r;

    printf("Circumference of the circle is = %.2lf", circumf);
    printf("\nArea of the circle is = %.2lf", area);
    return 0;
}

//output
// Input the radius of the circle : 7
// Circumference of the circle is = 43.96
// Area of the circle is = 153.86
