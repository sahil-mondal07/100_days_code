//Write a program to swap the first and last digit of a number

#include <stdio.h>
int main(){
    int n, first_digit, last_digit, num_digits = 0, temp, swapped_num;

    printf("enter num : ");
    scanf("%d", &n);

    temp = n;
    last_digit = n % 10;

    
    while (temp >= 10){
        temp = temp / 10;
        num_digits++;
    }
    first_digit = temp;
    num_digits++; 

    
    if (num_digits == 1){
        swapped_num = n;
    } else {
        
        int middle_part = n % (int)pow(10, num_digits - 1);
        middle_part = middle_part / 10;

        
        swapped_num = last_digit * (int)pow(10, num_digits - 1) + middle_part * 10 + first_digit;
    }

    printf("the number after swapping first and last digit is : %d\n", swapped_num);

    return 0;
}