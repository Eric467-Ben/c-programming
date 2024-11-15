//Program to write an array of structures to a file using fwrite and read it back
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Write the array of structures to a file
    FILE *file = fopen("students.bin", "wb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data written to students.bin successfully.\n");

    // Read the array of structures from the file and display it
    file = fopen("students.bin", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Student readStudents[n];
    fread(readStudents, sizeof(struct Student), n, file);
    fclose(file);

    printf("\nData read from students.bin:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", readStudents[i].name, readStudents[i].marks);
    }

    return 0;
}
