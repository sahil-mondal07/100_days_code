//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main(){
    int num1, num2, x;

    printf("enter 1st num : ");
    scanf("%d", &num1);
    printf("enter 2nd num : ");
    scanf("%d", &num2);

    x = num1;
    num1 = num2;
    num2 = x;

    printf("1st num after swap : %d\n", num1);
    printf("2nd num after swap : %d\n", num2);

    return 0;
}