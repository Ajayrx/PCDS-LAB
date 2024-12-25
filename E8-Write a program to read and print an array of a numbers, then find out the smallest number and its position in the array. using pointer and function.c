#include <stdio.h>
// Function to read an array of n numbers

void readArray(int *arr, int n)
{
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Function to find the smallest number and its position in the array
void findSmallest(int *arr, int n, int *smallest, int *position)
{

    *smallest = arr[0];
    *position = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *smallest)
        {
            *smallest = arr[i];
            *position = i;
        }
    }
}

int main()
{
    int n;
    // Prompt the user to enter the size of the array

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check if the entered size is non-negative

    if (n <= 0)
    {
        printf("Invalid input.Please enter a positive array size.\n ");
        return 1;
    }
    int arr[n];

    int smallest, position;

    // Read the array

    readArray(arr, n);

    // Find the smallest number and its position

    findSmallest(arr, n, &smallest, &position);

    // Display the array

    printf("Array Elements:\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }

    printf("\n");

    // Display the smallest number and its position
    printf("Smallest Number: %d\n", smallest);
    printf("position of smallest Number: %d\n", position);
    return 0;
}