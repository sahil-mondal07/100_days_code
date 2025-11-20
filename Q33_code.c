//Write a program to check if a number is an Armstrong number

#include <stdio.h>
#include <math.h>
int main() {
    int n, original, remainder, result = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = n;

    // Calculate the sum of the power of each digit
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}       