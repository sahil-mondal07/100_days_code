//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main(){
    float p, r, t, si, ci, a;
    printf("enter principle amount : ");
    scanf("%f", &p);
    printf("enter rate of interest annually : ");
    scanf("%f", &r);
    printf("enter time (in years): ");
    scanf("%f", &t);

    si = p*r*t/100;
    a = p*pow((1 + r/100), t);
    ci = a - p;

    printf("the simple interest is %f\n", si);
    printf("the compound interest is %f\n", ci);

    return 0;
}