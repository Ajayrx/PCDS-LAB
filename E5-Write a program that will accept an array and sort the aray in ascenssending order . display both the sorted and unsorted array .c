#include <stdio.h>
void bubbleSort(int arr[], int n){
    int temp;
    for (int i = 0;i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
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
    
    // Display the unsorted array 
    printf("Unsorted Array: "); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    }
    printf("\n");

    // Sort the array in ascending order
    bubbleSort(arr,n);

    // Display the sorted array 
    printf("Sorted Array (Ascending Order): "); 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}