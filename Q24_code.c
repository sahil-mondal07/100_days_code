/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include <stdio.h>

int main(){
    int n, bill;
    printf("enter unit consumed : ");
    scanf("%d", &n);

    if(n>0 && n<=100){
        bill = (n*5);
        printf("bill : rupees ₹ %d\n", bill);
    }else if(n>100 && n<=200){
        bill = 100*5 + ((n-100)*7);
        printf("bill : rupees ₹ %d\n", bill);
    }else if(n>200 && n<=300){
        bill = (100*5) + (100*7) + ((n-200)*10);
        printf("bill : rupees ₹ %d\n", bill);
    }else{
        bill = (100*5) + (100*7) + (100*10) + ((n-300)*12);
        printf("bill : rupees ₹ %d\n", bill);
    }

    return 0;
}