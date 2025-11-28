#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Multiplication = %d\n", a * b);
    printf("Subtraction = %d\n", a - b);
    if (b != 0) {
        printf("Division = %d\n", a / b);
    } else {
        printf("Division not possible (cannot divide by zero)\n");
    }
    return 0;
}
