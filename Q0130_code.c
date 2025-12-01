//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
int main() {
    FILE *file;
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        char name[100];
        int rollNumber;
        float marks;

        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &rollNumber);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, rollNumber, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("-----------------\n");

    for (i = 0; i < n; i++) {
        char name[100];
        int rollNumber;
        float marks;

        fscanf(file, "%s %d %f", name, &rollNumber, &marks);
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", name, rollNumber, marks);
    }
    fclose(file);

    return 0;
}
