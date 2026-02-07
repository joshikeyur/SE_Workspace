// Write a C program that acts as a simple calculator. //
// Extra Lab ex.op.1 // 
#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    // Input from user
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c handles newline

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Calculator logic
    switch (op) {
        case '+':
            printf("Result = %.2lf\n", num1 + num2);
            break;

        case '-':
            printf("Result = %.2lf\n", num1 - num2);
            break;

        case '*':
            printf("Result = %.2lf\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        case '%':
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;

        default:
            // Challenge: invalid operator handling
            printf("Error: Invalid operator. Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

