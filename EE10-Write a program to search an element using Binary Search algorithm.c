#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            return mid; // Element found, return its index
        }
        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {

            right = mid - 1;
        }
    }
    return -1; // Element not found }
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

    // Input sorted elements from the user
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);

    } // Prompt the user to enter the element to search for

    printf("Enter the element to search for: ");

    scanf("%d", &key);

    // Perform Binary Search

    int result = binarySearch(arr, n, key);

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