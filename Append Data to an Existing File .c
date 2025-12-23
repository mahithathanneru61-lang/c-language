#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("data.txt", "a");
    if (fptr == NULL) {
        printf("Error!");
        return 1;
    }
    fprintf(fptr, "New user added.\n");
    fclose(fptr);
    return 0;
}
