//Return a structure containing top student's details from a function.

#include <stdio.h>


struct Student {
    char name[50];
    int roll_no;
    int marks;
};


struct Student findTopper(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  
}

int main() {
    int n = 3; 
    struct Student s[3];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }


    struct Student top = findTopper(s, n);


    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll_no, top.marks);

    return 0;
}
