//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main(){
    int n;
    printf("enter num of week day: ");
    scanf("%d", &n);

    if(n==1){
        printf("MONDAY");
    }else if(n==2){
        printf("TUESDAY");
    }else if(n==3){
        printf("WEDNESDAY");
    }else if(n==4){
        printf("THURSDAY");
    }else if(n==5){
        printf("FRIDAY");
    }else if(n==6){
        printf("SATURDAY");
    }else if(n==7){
        printf("SUNDAY");
    }else{
        printf("enter correct number");
    }
    return 0;
}