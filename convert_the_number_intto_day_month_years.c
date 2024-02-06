
//Write a C program to convert specified days into years, weeks and days.
//ignore the leap year.

#include<stdio.h>

int main() {

    int number_days;
    printf("Enter the number of days: ");
    scanf("%d",&number_days);

    int years, weeks, days;

    years = number_days / 365;

    weeks = ( number_days % 365) / 7;

    days = number_days - (( years * 365 ) + ( weeks * 7));

    printf ( " Years : - %d\n", years);
    printf ( " Weeks : - %d\n", weeks);
    printf ( " Days : - %d\n", days);


    return 0;
}