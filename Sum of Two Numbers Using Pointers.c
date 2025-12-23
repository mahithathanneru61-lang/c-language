#include <stdio.h>

int main() {
    int a = 15, b = 25;
    int *p1 = &a, *p2 = &b;
    int sum;

    sum = *p1 + *p2;

    printf("Sum = %d\n", sum);

    return 0;
}
