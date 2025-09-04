//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main(){
    int n1, n2;

    printf("enter 1st num : ");
    scanf("%d", &n1);
    printf("enter 2nd num : ");
    scanf("%d", &n2);

    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;

    printf("after swap n1 : %d\n", n1);
    printf("after swap n2 : %d\n", n2);

    return 0;
}