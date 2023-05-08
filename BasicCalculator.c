#include <stdio.h>
#include <stdlib.h>

#define ADDITION 1
#define SUBTRACTION 2
#define DIVISION 3
#define MULTIPLICATION 4

int main(){
    double num1, num2;
    int op;
    char enter;

    printf("Welcome To Basic Calculator!\n");
    printf("Made By Daily\n");
    printf("Press Enter to Continue:\n");

    if (scanf("%c", &enter) < 1) {
        printf("Nope Hit Enter\n");
        return 0;
    }

    do {
        printf("What operation do you need?\n");
        printf("Type %d for Additon\n", ADDITION);
        printf("Type %d for Subtraction\n", SUBTRACTION);
        printf("Type %d for Division\n", DIVISION);
        printf("Type %d for Multiplication\n", MULTIPLICATION);

        if (scanf("%d", &op) != 1) {
            printf("Invalid input\n");
            return 0;
        }

        printf("Enter the first number: ");
        if (scanf("%lf", &num1) != 1) {
            printf("Invalid input\n");
            return 0;
        }

        printf("Enter the second number: ");
        if (scanf("%lf", &num2) != 1) {
            printf("Invalid input\n");
            return 0;
        }

        switch (op) {
            case ADDITION:
                printf("%.2f\n", num1 + num2);
                break;
            case SUBTRACTION:
                printf("%.2f\n", num1 - num2);
                break;
            case DIVISION:
                if (num2 == 0) {
                    printf("Cannot divide by zero\n");
                } else {
                    printf("%.2f\n", num1 / num2);
                }
                break;
            case MULTIPLICATION:
                printf("%.2f\n", num1 * num2);
                break;
            default:
                printf("Invalid input\n");
                break;
        }

        printf("Do you want to perform another calculation? (y/n): ");
        if (scanf(" %c", &enter) != 1) {
            printf("Invalid input\n");
            return 0;
        }

    } while (enter == 'y' || enter == 'Y');

    return 0;
}


/*
Fix errors
Returns from Nope and invalid operator to return to 


a while loope is needed


*/