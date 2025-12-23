#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fptr;
    fptr = fopen("log.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }
    fputs("Log Entry: System Started\n", fptr);
    fputs("Log Entry: User Logged In\n", fptr);
    fclose(fptr);
    return 0;
}
