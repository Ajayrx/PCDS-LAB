#include <stdio.h>
int main(){
    int n;

    // Prompt the user to enter the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check if the entered size is non-negative
    if (n <= 0){
        printf("Invalid input. Please enter a positive array size.\n");
        return 1;
    }
    
    int arr[n];
    // Prompt the user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    // Initialize variables for largest, smallest, sum, and average 
    int largest = arr[0];
    int smallest = arr[0];
    int sum = arr[0];

    // Find largest, smallest, sum, and average
    for (int i = 1; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
        if (arr[i] < smallest){
            smallest = arr[i];
        }
        sum += arr[i];
    }

    float average=(float)sum / n;

    // Display the results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}