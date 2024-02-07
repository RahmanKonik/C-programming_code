
// write a c program to create a calculator

#include<stdio.h>

int main() {

    int value_one, value_two;
    printf("Enter the first number: ");
    scanf("%d",&value_one);

    printf("Enter the second number: ");
    scanf("%d",&value_two);

    int symbol;
    printf("1. operator '+' .\n" );
    printf("2. operator '-' .\n" );
    printf("3. operator '*' .\n" );
    printf("4. operator '/' .\n" );
    printf("5. operator 'modules' .\n" );
    printf("Enter your operator: ");
    scanf("%d", &symbol);

    int total;


    switch (symbol)
    {
    case 1:
        total = value_one + value_two;
        printf("The result is %d\n", total);
        break;
    case 2:
        total = value_one - value_two;
        printf("The result is %d\n", total);
        break;

    case 3:
        total = value_one * value_two;
        printf("The result is %d\n", total);
        break;
    case 4:
        total = value_one / value_two;
        printf("The result is %d\n", total);
        break;
    case 5:
        total = value_one % value_two;
        printf("The result is %d\n", total);
        break;
    default:
        printf("Invalid information!.");
    }

    return 0;
}