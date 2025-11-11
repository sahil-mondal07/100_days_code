//Write a program to calculate the factorial of a number.

#include <stdio.h>
int factorial(int);
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    return factorial(n-1)*n;
}
int main(){
    int a;
    printf("enter num : ");
    scanf("%d",&a);
    printf("the factorial of %d is %d", a, factorial(a));
    return 0;
}