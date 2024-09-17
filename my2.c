#include <stdio.h>
#include <stdlib.h>  // Include stdlib.h for system()

int main() {
    char operator;
    double num1, num2, result;

    // Asking the user to input an operator (+, -, *, /)
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Asking the user to input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch case to perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            // In case the operator is invalid
            printf("Error! Invalid operator.\n");
            break;
    }

    system("pause");  // Pause the console window

    return 0;
}
