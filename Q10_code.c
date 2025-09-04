//Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include <stdio.h>

int main(){
    int t, h, m, s;

    printf("enter time(in sec): ");
    scanf("%d", &t);

    h = t/3600;
    m = (t % 3600) / 60;
    s = t % 60;

    printf("the time in hour,min,sec format is : %d:%d:%d\n", h, m, s);

    return 0;
    
}