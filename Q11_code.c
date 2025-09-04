//Write a program to input an integer and check whether it is even or odd using if–else

#include <stdio.h>

int main(){
    int num;

    printf("enter num: ");
    scanf("%d", &num);

    if(num%2==0){
        printf("the number you entered is even");
    }else{
        printf("the number you entered is odd");
    }
    
    return 0;
}