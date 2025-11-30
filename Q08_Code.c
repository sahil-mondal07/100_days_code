//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main(){
    int n, i, sum = 0;

    printf("enter number : ");
    scanf("%d", &n);

    if (n <= 0){
        printf("enter correct number");
    }else{
        for(i=1; i<=n; i++){
            sum = sum+i;
        }
        printf("the sum of first %d natural numbers are : %d\n", n, sum);
    }

    return 0;
}