//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main(){
    int num1, num2, sum, difference, product, quotient;

    printf("enter 1st num: ");
    scanf("%d", &num1);

    printf("enter 2nd num: ");
    scanf("%d", &num2);

    sum = num1+num2;
    printf("the sum of numbers are : %d\n", sum);

    difference = num1-num2;
    printf("the difference of two numbers are : %d\n", difference);

    product = num1*num2;
    printf("the product if two numbers are : %d\n", product);

    quotient = num1/num2;
    printf("the quotient of two numbers are : %d\n", quotient);

    return 0;
}