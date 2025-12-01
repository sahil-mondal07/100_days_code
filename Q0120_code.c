/*Write a program to take a string input. Change every starting word to sentence case.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int newWord = 1;   // Flag to detect start of a word

    while (str[i] != '\0') {
        if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // Capitalize start of word
            newWord = 0;
        }
        else if (str[i] == ' ') {
            newWord = 1;  // Next character starts a new word
        }
        i++;
    }

    printf("%s", str);
    return 0;
}


