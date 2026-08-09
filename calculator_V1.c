/*==========================================================================================
                                       ❤️CALCULATOR❤️
============================================================================================*/


#include <stdio.h>  //(this gives the printf and scanf features to use)

int main() {//  (this is the main body of the code(starting point))

    int a, b, choice;//        (defining variables)

    while (1) {

        printf("\n===== ❤️CALCULATOR❤️ =====\n");//       (main menu)
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");//              (entering choice by the user)
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Goodbye!\n");//          (breaking the loop if user wants to exit)
            break;
        }

        if (choice == 1) {//               (addition)
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a + b);
        }
        else if (choice == 2) {//            (subtraction)
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a - b);
        }
        else if (choice == 3) {//              (multiplication)
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n", a * b);
        }
        else if (choice == 4) {//              (division)
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            if (b == 0) {//                     (checking zero division error)
                printf("Error! Division by zero is not allowed.\n");
            } else {
                printf("Result: %d\n", a / b);
            }
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;//             (end the program successfully)
}