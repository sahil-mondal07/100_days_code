//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[1000];
    char longestWord[100] = "";
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    char *token = strtok(sentence, " \n");
    while (token != NULL)
    {
        int length = strlen(token);
        if (length > maxLength)
        {
            maxLength = length;
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " \n");
    }

    if (maxLength > 0)
    {
        printf("The longest word is: %s\n", longestWord);
        printf("Length of the longest word: %d\n", maxLength);
    }
    else
    {
        printf("No words found in the sentence.\n");
    }

    return 0;
}