
#include<stdio.h>

int main() {

    double double_value;
    printf("Enter a double number: ");
    scanf("%lf",&double_value);

    char name;
    getchar();
    printf("Enter your name: ");
    scanf("%c",&name);

    float float_value;
    printf("Enter a float value :");
    scanf("%f",&float_value);

    printf("Double value : %lf\n", double_value);
    printf("Char(String) value : %c\n", name);
    printf("float value : %f\n", float_value);

    return 0;

}