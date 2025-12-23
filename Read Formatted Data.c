#include <stdio.h>
int main() {
    FILE *fptr;
    char name[50];
    int age;
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Name\tAge\n");
    while (fscanf(fptr, "%s %d", name, &age) == 2) {
        printf("%s\t%d\n", name, age);
    }
    fclose(fptr);
    return 0;
}
