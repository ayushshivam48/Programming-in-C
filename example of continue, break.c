#include <stdio.h>
#include <stdlib.h>

int main() {
    float balance = 1000.0;
    int choice;
    float deposit, withdraw;
    
// while (1) means 1 is an infinite loop
    while (1) { 
        printf("\nBank Transaction Menu\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the amount to deposit: ");
                scanf("%f", &deposit);
                if (deposit < 0) {
                    printf("Invalid amount. Please enter a positive amount.\n");
                    continue; // Skip the rest of the loop and show the menu again
                }
                balance += deposit;
                printf("Deposit of %.2f successfully made. New balance: %.2f\n", deposit, balance);
                break; // Exit the switch statement

            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &withdraw);
                if (withdraw < 0 || withdraw > balance) {
                    printf("Invalid amount or insufficient balance. Please try again.\n");
                    continue; // Skip the rest of the loop and show the menu again
                }
                balance -= withdraw;
                printf("Withdrawal of %.2f successfully made. New balance: %.2f\n", withdraw, balance);
                break; // Exit the switch statement

            case 3:
                printf("Exiting the bank transaction system. Thank you!\n");
                exit(0); // Exit the program

            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break; // Exit the switch statement
        }
    }

    return 0;
}