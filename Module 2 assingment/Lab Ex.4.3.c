#include <stdio.h>
#include <conio.h>

int main() {
    float a, b, h;
    float areaSquare, areaCube, areaTriangle;

    // Area of Square
    printf("Enter side of the square: ");
    scanf("%f", &a);
    areaSquare = a * a;
    printf("Area of Square = %.2f\n", areaSquare);

    // Area of Cube (Total Surface Area)
    areaCube = 6 * a * a;
    printf("Area of Cube (Total Surface Area) = %.2f\n", areaCube);

    // Area of Triangle
    printf("\nEnter base of the triangle: ");
    scanf("%f", &b);
    printf("Enter height of the triangle: ");
    scanf("%f", &h);
    areaTriangle = 0.5 * b * h;
    printf("Area of Triangle = %.2f\n", areaTriangle);

    return 0;
}

