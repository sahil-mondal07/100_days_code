//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length, i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    printf("All substrings of the string are:\n");
    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            for (k = i; k <= j; k++)
            {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }

    return 0;
}