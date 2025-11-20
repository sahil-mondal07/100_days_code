//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main(){
    int n, r;
    long long product = 1;
    int has_odd = 0;

    printf("enter num : ");
    scanf("%d", &n);

    while (n > 0){
        r = n % 10;
        if (r % 2 != 0){
            product = product * r;
            has_odd = 1;
        }
        n = n / 10;
    }

    if (has_odd){
        printf("the product of odd digits is : %lld\n", product);
    } else {
        printf("there are no odd digits in the number.\n");
    }

    return 0;
}