//Take two structs as input and check if they are identical

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int areSame(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        return 1; 
    }
    return 0;      
}

int main() {
    struct Student s1, s2;
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    if (areSame(s1, s2))
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
}
