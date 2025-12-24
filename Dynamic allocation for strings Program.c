#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    float avg;
    int *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory not allocated\n");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    avg = 0;
    for (i = 0; i < n; i++)
    {
        avg += arr[i];
    }
    avg = avg / n;
    printf("Average = %.2f\n", avg);
    free(arr);
    return 0;
}
