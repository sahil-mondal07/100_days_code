//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main(){
    int n, r, ones_complement = 0, place = 1;

    printf("enter binary number : ");
    scanf("%d", &n);

    int temp = n;

    while (n > 0){
        r = n % 10;
        if (r == 0){
            ones_complement = ones_complement + 1 * place;
        }else{
            ones_complement = ones_complement + 0 * place;
        }
        n = n / 10;
        place = place * 10;
    }

    printf("1's complement of %d is : %d\n", temp, ones_complement);

    return 0;
}