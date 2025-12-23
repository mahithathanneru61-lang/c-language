#include <stdio.h>
int main() {
    FILE *fptr;
    char ch;
    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}
