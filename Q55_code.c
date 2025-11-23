//Write a program to print all the prime numbers from 1 to n

#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Found a divisor, not prime
    }
    return 1; // No divisors found, it's prime
}
int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
