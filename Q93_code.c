//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000], str2[1000];
    int freq[256] = {0}; 

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    for (int i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
    {
        freq[(unsigned char)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0' && str2[i] != '\n'; i++)
    {
        freq[(unsigned char)str2[i]]--;
    }

    
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("The strings are not anagrams of each other.\n");
            return 0;
        }
    }

    printf("The strings are anagrams of each other.\n");
    return 0;
}