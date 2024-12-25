#include <stdio.h>
// Function to swap two integer values
void swap(int *x, int *y)
{
    int temp =*x;
    *x = *y;
    *y = temp;
}
    int main()
    {
        int num1, num2;

        // Prompt the user to enter two numbers 
        printf("Enter the first number: "); 
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        // Display the initial values 
        printf("\nInitial Values:\n"); 
        printf("First Number: %d\n", num1); 
        printf("Second Number: %d\n", num2);

        // Call the swap function to swap the values 
        swap(&num1, &num2);

        // Display the values after swapping 
        printf("\nValues After Swapping:\n"); printf("First Number: %d\n", num1);
        printf("Second Number: %d\n", num2);

        return 0;
    }