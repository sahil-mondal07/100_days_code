//Find and print the student with the highest marks.

#include <stdio.h>


struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);  
        printf("Roll: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

 
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

  
    printf("Topper: %s (Marks: %d)\n", s[topIndex].name, s[topIndex].marks);

    return 0;
}
