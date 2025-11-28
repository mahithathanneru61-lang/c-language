#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("%d is the largest\n", a);
    }
    else if (b > a && b > c) {
        printf("%d is the largest\n", b);
    }
    else if (c > a && c > b) {
        printf("%d is the largest\n", c);
    }
    else {
        printf("All numbers are equal or two numbers are same\n");
    }
    return 0;
}
