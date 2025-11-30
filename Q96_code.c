//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
void reverseWord(char *start, char *end)
{
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *wordStart = NULL;
    char *ptr = sentence;

    while (*ptr != '\0')
    {
        if (wordStart == NULL && *ptr != ' ' && *ptr != '\n')
        {
            wordStart = ptr; 
        }
        if (wordStart != NULL && (*ptr == ' ' || *ptr == '\n' || *(ptr + 1) == '\0'))
        {
            char *wordEnd = ( (*ptr == ' ' || *ptr == '\n') ? ptr - 1 : ptr );
            reverseWord(wordStart, wordEnd);
            wordStart = NULL; 
        }
        ptr++;
    }

    printf("Sentence after reversing each word:\n%s", sentence);

    return 0;
}