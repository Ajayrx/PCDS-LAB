#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;

    // Prompt the user to enter the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    ptr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input integers into the allocated memory
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Display the set of numbers
    printf("Set of Numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
    printf("\n");

    // Free the allocated memory free(ptr);

    return 0;
}