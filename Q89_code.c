//Count frequency of a given character in a string.

#include <stdio.h>
int main()
{
    char str[1000], targetChar;
    int frequency = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf(" %c", &targetChar);

    
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] == targetChar)
        {
            frequency++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", targetChar, frequency);

    return 0;
}