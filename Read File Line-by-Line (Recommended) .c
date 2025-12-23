#include <stdio.h>
#include <stdlib.h> // For exit()
int main() {
    FILE *fptr;
    char buffer[255]; 
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        exit(1);
    }
    printf("File contents:\n");
    while (fgets(buffer, 255, fptr) != NULL) {
        printf("%s", buffer);
    }
    fclose(fptr);
    return 0;
}
