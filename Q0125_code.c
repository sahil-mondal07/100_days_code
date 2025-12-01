//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char newLine[256];

    // Take filename as input
    printf("Enter the filename to append text: ");
    scanf("%s", filename);

    // Open the file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Clear input buffer before taking a new line input
    while (getchar() != '\n');

    // Take new line of text as input
    printf("Enter the text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the new line to the file
    fputs(newLine, file);

    // Close the file
    fclose(file);

    printf("Text appended to %s successfully.\n", filename);

    return 0;
}
