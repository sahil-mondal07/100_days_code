//Reverse a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    length = 0;
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    
    for (i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s", str);

    return 0;
}