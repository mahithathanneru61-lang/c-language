#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c to avoid input issues
    printf("Enter second number: ");
    scanf("%d", &b);
    switch (op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error: Cannot divide by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
