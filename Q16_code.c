//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("enter num1 : ");
    scanf("%d", &num1);
    printf("enter num 2 : ");
    scanf("%d", &num2);
    printf("enter num 3 : ");
    scanf("%d", &num3);
     if (num1 > num2 && num1 > num3){
        printf("largest is %d\n", num1);
     }else if (num2>num1 && num2>num1)
     {
        printf("largest is %d\n", num2);
     }else{
        printf("largest is %d\n", num3);
     }
     
    return 0;
}