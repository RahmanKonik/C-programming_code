
//a program  to calculate  area of a circle.

#include<stdio.h>

int main() {

    // formula is - area = pi * r^2.
    // pi value is constant , so we need to user input.

    double radius;

    printf("Enter the first side value: ");
    scanf("%lf", &radius);

    // printf("Enter the second side value: ");
    // scanf("%d", &side_two);

    double area_circle;

    area_circle = 3.14 * radius * radius;

    printf("The area of a square: %lf\n", area_circle);

    return 0;
}