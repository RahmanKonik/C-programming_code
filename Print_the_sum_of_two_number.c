
#include<stdio.h>

int main() {

    // declare two number.
    int value_one, value_two;

    printf("Enter the first number: ");
    scanf("%d",&value_one);

    printf("Enter the first number: ");
    scanf("%d",&value_two);

    int summation;

    summation = value_one + value_two;

    printf("Result is %d \n", summation);

    return 0;

}