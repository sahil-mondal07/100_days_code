//Write a program to print the product of even numbers from 1 to n

#include <stdio.h>

int main(){
    int n, i, product=1;
    printf("enter num : ");
    scanf("%d", &n);

    for (i = 2; i <=n ; i+=2){
        product*=i;
    }
    printf("product of first n even number is : %d", product);

    return 0;
}