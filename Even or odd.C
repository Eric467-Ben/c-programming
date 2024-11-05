// Function to check if a number is even or odd 
#include <stdio.h>
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}

int main() {
    int num;

    // prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    //To Check if the number is even or odd
    checkEvenOdd(num);

    return 0;
}
