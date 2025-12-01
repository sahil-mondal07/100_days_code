//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    int vowelCount = 0, consonantCount = 0;

    // Open the file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Check for vowels (both uppercase and lowercase)
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char lowerCh = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch; // Convert to lowercase
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    // Close the file
    fclose(file);

    // Print the counts
    printf("Total vowels: %d\n", vowelCount);
    printf("Total consonants: %d\n", consonantCount);

    return 0;
}
