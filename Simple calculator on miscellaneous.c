#include <stdio.h>
int main() {
    int choice;
    double a, b, result;
    printf("Simple Calculator (Miscellaneous Operations)\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    switch(choice) {
        case 1:
            result = a + b;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            if (b != 0)
                result = a / b;
            else {
                printf("Error! Division by zero not allowed.\n");
                return 0;
            }
            printf("Result = %.2lf\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
