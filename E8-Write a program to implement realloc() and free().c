#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size, newSize;
    printf("Enter the initial size of the array: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Prompt the user to enter elements for the array
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    } 
    // Display the elements of the array
    printf("Array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Prompt the user to enter the new size for reallocation
    printf("Enter the new size for reallocation: ");
    scanf("%d", &newSize);

    // Reallocate memory using realloc()
    arr = (int *)realloc(arr, newSize * sizeof(int));

    // Check if reallocation was successful
    if (arr == NULL)
    {
        printf("Memory reallocation failed.\n");
        return 1;

    } // Prompt the user to enter additional elements for the array
    printf("Enter %d more elements for the array:\n", newSize - size);
    for (int i = size; i < newSize; i++)
    {
        scanf("%d", &arr[i]);

    } // Display the elements of the reallocated array
    printf("Reallocated Array Elements:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // free the memory
    free(arr);
    return 0;
}