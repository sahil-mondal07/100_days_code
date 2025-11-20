//Write a program to check if a number is a strong number.

#include <stdio.h>
int factorial(int num){
    int fact = 1, i;
    for (i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}