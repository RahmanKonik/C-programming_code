

//Write a C program that accepts three integers and finds the maximum of three.

#include<stdio.h>

int main() {

    int number_one, number_two, number_three;

    printf("Enter the first number: ");
    scanf("%d", &number_one);

    printf("Enter the second number: ");
    scanf("%d", &number_two);

    printf("Enter the third number: ");
    scanf("%d", &number_three);

    if ( number_one > number_two || number_one > number_three ){
        printf(" Big is number is %d than %d and %d ", number_one, number_two, number_three);
    } else if (number_two > number_three){
        printf(" Big is number is %d than %d and %d ", number_two, number_one, number_three);
    } else if (number_one == number_two || number_one == number_three ) {
        printf(" Big is number is %d and all are equal. ", number_three);
    } else {
        printf(" Big is number is %d than %d and %d ", number_three, number_one, number_two);
    }

    return 0;

}