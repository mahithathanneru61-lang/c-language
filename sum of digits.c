#include <stdio.h>
int main() {
    int num, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;   // get last digit
        sum = sum + remainder;  // add to sum
        num = num / 10;         // remove last digit
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
