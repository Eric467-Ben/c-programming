//Program to read name and marks of n students and store them in a file
#include <stdio.h>

int main() {
    FILE *file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int n;
    char name[50];
    int marks;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks);

        fprintf(file, "Name: %s, Marks: %d\n", name, marks);
    }

    fclose(file);
    printf("Data appended to students.txt successfully.\n");

    return 0;
}
