/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *  */

#include <stdio.h>
int main() {
    int i, j, rows = 4;

    // Upper half of the pattern
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = rows - 1; i >= 1; i--) {
        for (j = rows; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}