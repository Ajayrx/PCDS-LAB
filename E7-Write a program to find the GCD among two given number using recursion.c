#include <stdio.h>

// Function to find the GCD of two numbers using recursion
int gcd(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return gcd(num2,num1%num2);
    }
}
int main()
{
    int num1, num2;

    // Prompt the user to enter two numbers 
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the GCD using the ged function
     
    int result = gcd(num1, num2);

    // Display the GCD

    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}