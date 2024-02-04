

//Write a C program to print the following characters in reverse

#include<stdio.h>
#include<string.h>

int main() {

    char string[] = "XML";

    int length = strlen(string);

    printf("Original: %s\n", string);

    printf("Reverse: ");

    for ( int i = length -1 ; i>=0; i--){
        printf("%c", string[i]);
    }

    return 0;
}

