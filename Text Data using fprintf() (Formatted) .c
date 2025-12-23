#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fptr;
    char name[20] = "Alice";
    int age = 25;
    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }
    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);
    fclose(fptr);
    printf("Data written successfully!\n");
    return 0;
}
