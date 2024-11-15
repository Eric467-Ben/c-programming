//C Program to perform basic text file operation
#include <stdio.h>
#include <stdlib.h>

// Function to write a paragraph to "output.txt"
void writeToFile() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    char paragraph[201];
    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
    printf("Paragraph written to output.txt successfully.\n");
}

// Function to read content from "output.txt"
void readFromFile() {
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    char ch;
    printf("Content of output.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    printf("\n");
}

// Function to append an additional paragraph to "output.txt"
void appendToFile() {
    FILE *file = fopen("output.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }

    char paragraph[201];
    printf("Enter an additional paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
    printf("Additional paragraph appended to output.txt successfully.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // To consume newline character left by scanf

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
