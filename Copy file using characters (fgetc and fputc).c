#include <stdio.h>
int main()
{
    FILE *source, *target;
    char ch;
    source = fopen("source.txt", "r");
    target = fopen("target.txt", "w");
    if (source == NULL || target == NULL)
    {
        printf("File cannot be opened\n");
        return 0;
    }
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }

    printf("File copied successfully\n");
    fclose(source);
    fclose(target);
    return 0;
}
