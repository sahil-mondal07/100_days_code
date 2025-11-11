//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main(){
    int n,i,sum=0;
    printf("enter the num : ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
        {
            sum = sum+(2*i-1);
        }
        printf("the sum of the first %d odd num are : %d\n",n,sum);
        
    return 0;
}