#include <math.h>
#include <stdio.h>

int main() {
    float a, b, c, d, root1, root2;

    printf("enter a: ");
    scanf("%f", &a);

    printf("enter b: ");
    scanf("%f", &b);

    printf("enter c: ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("roots are real and different: %.01f, %.01f\n", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("roots are real and same: %0.1f\n", root1);
    } else {
        printf("roots are complex\n");
    }

    return 0;
}
