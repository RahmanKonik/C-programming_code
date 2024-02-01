
// a program to calculate the area of a square.

#include<stdio.h>

int main() {

    int side_one;

    printf("Enter the first side value: ");
    scanf("%d", &side_one);

    // printf("Enter the second side value: ");
    // scanf("%d", &side_two);

    int area_square;

    area_square = side_one * side_one;

    printf("The area of a square: %d\n", area_square);

    return 0;

}