//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main(){
    float celcius, fahrenite;

    printf("enter the temp in cel : ");
    scanf("%f", &celcius);

    fahrenite= (celcius*9/5)+32;

    printf("the temp in F is :%f\n", fahrenite);

    return 0;
    
}