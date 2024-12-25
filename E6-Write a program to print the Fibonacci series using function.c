#include <stdio.h>

// Function to print Fibonacci series up to n terms

void printFibonacci(int n)
{
    int first = 0, second = 1, next;

    printf("Fibonacci Series (first %d terms):\n", n);

    for (int i = 0; i < n; i++)
    {

        if (i <= 1)
        {

            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");
}

int main()
{

    int terms;

    // Prompt the user to enter the number of terms

    printf("Enter the number of terms which you want in the Fibonacci series: ");

    scanf("%d", &terms);

    // Call the function to print the Fibonacci series

    printFibonacci(terms);

    return 0;
}