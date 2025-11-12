// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, r;
    int binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    do {
        r = n % 2;
        binary = binary + r * place;
        n = n / 2;
        place *= 10;
    } while (n > 0);

    printf("Binary of %d is: %d\n", temp, binary);

    return 0;
}
