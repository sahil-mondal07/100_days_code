//Write a program to input two numbers and display their sum.

#include <stdio.h>

int main(){
    int num1, num2, sum;
    printf("enter 1st num: ");
    scanf("%d", &num1);
    printf("enter 2nd num: ");
    scanf("%d", &num2);

    sum = num1+num2;
    printf("the sum of both number are : %d\n", sum);
    
    return 0;
}