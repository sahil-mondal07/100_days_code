//Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

// Define enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct for a Person
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    char input[10];
    struct Person p;

    printf("Enter gender (MALE, FEMALE, OTHER): ");
    scanf("%s", input);

    // Map input string to enum
    if (strcmp(input, "MALE") == 0) p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0) p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0) p.gender = OTHER;
    else {
        printf("Invalid input.\n");
        return 1;
    }

    // Print gender
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
