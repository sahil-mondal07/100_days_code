//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
int isRotation(const char *str1, const char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    
    if (len1 != len2)
    {
        return 0; 
    }

    
    char concatenated[2 * len1 + 1];
    strcpy(concatenated, str1);
    strcat(concatenated, str1);

    
    if (strstr(concatenated, str2) != NULL)
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}