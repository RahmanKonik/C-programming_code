
//Write a C program to read an amount (integer value) and break the amount into the
//smallest(100,50,20,10) possible number of bank notes.

#include<stdio.h>

int main(){

    int number;

    printf("Enter your number for convert: - ");
    scanf("%d",&number);

    // converting in 100.

    int total = (int) number / 100;
    printf(" %d notes  of 100 euro.\n", total);

    // 50
    number = number - (total * 100);

    total = (int) number / 50;
    printf(" %d notes  of 50 euro.\n", total);

    // 20
    number = number - (total * 50);

    total = (int) number / 20;
    printf(" %d notes  of 20 euro.\n", total);

    // 10
    number = number - (total * 20);

    total = (int) number / 10;
    printf(" %d notes  of 10 euro.\n", total);


    return 0;
}
