#include <stdio.h>

// Function to perform Linear Search
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

int main()
{
    int n, key;
    // Prompt the user to enter the number of elements 
    printf("Enter the number of elements: "); 
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1;
    }

    int arr[n];

    // Input elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Prompt the user to enter the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Perform Linear Search
    int result = linearSearch(arr, n, key);

    // Display the result
    if (result != -1)
    {
        printf("Element %d found at index %d.\n", key, result);
    }
    else
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}