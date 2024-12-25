#include <stdio.h>

int main()
{
    int n, position, newElement;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive array size.\n");
        return 1;
    }

    int arr[n + 1];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to insert: ");
    scanf("%d", &newElement);
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &position);

    // Check if the entered position is valid
    if (position < 1 || position > n + 1)
    {
        printf("Invalid position. Please enter a valid position.\n");
        return 1;

    } // Perform the insertion
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = newElement;
    n++; // Increase the size of the array

    // Display the array after insertion
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}