//C program that calculates the fine for overdue library books
#include <stdio.h>

int main() {
    int book_ID, due_Date, return_Date;
    int days_Overdue;
    int fine_Rate;
    int fine_Amount;

    // the book details
    printf("Enter Book ID: ");
    scanf("%d", &book_ID);

    printf("Enter Due Date (in days): ");
    scanf("%d", &due_Date);

    printf("Enter Return Date (in days): ");
    scanf("%d", &return_Date);

    //To  Calculate days overdue
    days_Overdue = return_Date - due_Date;

    // Determine the fine rate based on days overdue
    if (days_Overdue <= 0) {
        fine_Rate = 0;
        fine_Amount = 0;
    } else if (days_Overdue <= 7) {
        fine_Rate = 20;
    } else if (days_Overdue <= 14) {
        fine_Rate = 50;
    } else {
        fine_Rate = 100;
    }

    // Calculate fine amount
    fine_Amount = fine_Rate * days_Overdue;

    // Display the information
    printf("\nBook ID: %d\n", book_ID);
    printf("Due Date: %d\n", due_Date);
    printf("Return Date: %d\n", return_Date);
    printf("Days Overdue: %d\n", days_Overdue);
    printf("Fine Rate: Ksh %d per day\n", fine_Rate);
    printf("Fine Amount: Ksh %d\n", fine_Amount);

    return 0;
}
