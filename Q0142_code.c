//Store details of 5 students in an array of structures and print all.

#include <stdio.h>


struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);  
        printf("Roll: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("\n");
    }


    printf("------------------------------------------------\n");
    printf("| %-10s | %-5s | %-5s |\n", "Name", "Roll", "Marks");
    printf("------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("| %-10s | %-5d | %-5d |\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    printf("------------------------------------------------\n");

    return 0;
}
