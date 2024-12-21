#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i <= num / 2; i++) { // Loop up to num / 2 for efficiency
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int start, end;

    // Prompt the user to enter the range
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Validate the range
    if (start >= end || start < 0 || end < 0) {
        printf("Invalid input. Please ensure the starting number is less than the ending number, and both are positive.\n");
        return 1; // Exit with an error code
    }

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Generate and print prime numbers in the given range
    for (int i = start; i <= end; i++) { // Use '=' for inclusive range
        if (isPrime(i)) {
            printf("%d ", i); // Print the prime number
        }
    }

    printf("\n"); // Add a newline after printing all primes
    return 0;
}
