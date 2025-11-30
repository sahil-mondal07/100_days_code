//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){
     float l, b, area, perimeter;

    printf("enter length: ");
    scanf("%f", &l);

    printf("enter width: ");
    scanf("%f", &b);

    area=l*b;
    perimeter=2*(l+b);

    printf("area of rectangle is: %f\n", area);
    printf("perimeter of rectangle is: %f\n", perimeter);
    return 0;
}