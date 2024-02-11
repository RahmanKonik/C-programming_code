
//Write a C program to calculate the distance between two points.

#include<stdio.h>
#include<math.h>

int main() {

    float x1, x2, y1,y2;

    printf("Input the value of x1: ");
    scanf("%f",&x1);

    printf("Input the value of y1: ");
    scanf("%f",&y1);

    printf("Input the value of x2: ");
    scanf("%f",&x2);

    printf("Input the value of y2: ");
    scanf("%f",&y2);

    float result = pow((x2 - x1),2) + pow((y2 - y1), 2);

    printf("Distance between two point (%f, %f) and (%f, %f) is %.4f ", x1, y2, x2, y2, sqrt(result));

    return 0;


}