//C program to manage simple text file operation
#include <stdio.h>
#include <stdlib.h>

// Function to write a sentence to "data.txt"
void writeToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    char sentence[101];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Sentence written to data.txt successfully.\n");
}

// Function to read content from "data.txt"
void readFromFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    char ch;
    printf("Content of data.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    printf("\n");
}

// Function to append a second sentence to "data.txt"
void appendToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }

    char sentence[101];
    printf("Enter a second sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    printf("Second sentence appended to data.txt successfully.\n");
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
