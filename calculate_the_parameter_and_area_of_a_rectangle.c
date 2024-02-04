

//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.


#include<stdio.h>

int main() {

    int height = 7, width = 5;

    int result_parameter = 2 * ( height + width);

    int total_area = height * width;

    printf("parameter: %d inches\n", result_parameter);

    printf("area: %d square inches\n", total_area);

    return 0;
}