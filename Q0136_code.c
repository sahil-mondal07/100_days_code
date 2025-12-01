// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    char choice[10];
    int num1, num2;
    enum Operation op;
    printf("Enter operation and two numbers (e.g., ADD 10 20): ");
    scanf("%s %d %d", choice, &num1, &num2);
    if (strcmp(choice, "ADD") == 0)
        op = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        op = MULTIPLY;
    else
    {
        printf("Invalid operation.\n");
        return 1;
    }
    switch (op)
    {
    case ADD:
        printf("%d\n", num1 + num2);
        break;
    case SUBTRACT:
        printf("%d\n", num1 - num2);
        break;
    case MULTIPLY:
        printf("%d\n", num1 * num2);
        break;
    }

    return 0;
}
