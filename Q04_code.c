//Write a program to calculate the area and circumference of a circle given its radius

#include <stdio.h>

int main(){
    int radius;
    float area, circumference;

    printf("enter radius: ");
    scanf("%d", &radius);

    area = 3.14*radius*radius;
    printf("the radius of the circle is : %f\n", area);
    circumference = 2*3.14*radius;
    printf("the circumference of the circle is : %f\n", circumference);

    return 0;
}