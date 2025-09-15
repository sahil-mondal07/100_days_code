//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main(){
    float cp, sp, profit, loss, percentage;

    printf("enter cp: ");
    scanf("%f", &cp);

    printf("enter sp: ");
    scanf("%f", &sp);

    if(cp<sp){
        profit = sp-cp;
        percentage = (profit/cp) * 100;
        printf("profit %.2f%%\n", percentage);
    }else if(cp>sp){
        loss = cp-sp;
        percentage = (loss/cp) * 100;
        printf("loss %.2f%%\n", percentage);
    }else{
        printf("no profit no loss");
    }

    return 0;
}