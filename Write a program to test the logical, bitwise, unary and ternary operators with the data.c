// Write a program to test the logical, bitwise, unary and ternary operators with the data.

#include <stdio.h>
int main()
{
    int num1, num2;

    // Prompt the user to enter two integers 

    printf("Enter the first integer: "); 
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Logical operators

    printf("\nLogical Operators:\n");
    printf("Logical AND (&&): %d\n", num1 && num2);
    printf("Logical OR (||): %d\n", num1 || num2);
    printf("Logical NOT (!num1): %d\n", !num1);

    // Bitwise operators

    printf("\nBitwise Operators:\n");
    printf("Bitwise AND (&): %d\n", num1 & num2);
    printf("Bitwise OR (1): %d\n", num1 | num2);
    printf("Bitwise XOR (^): %d\n", num1 ^ num2);
    printf("Bitwise NOT (~num1): %d\n", ~num1);

    // Unary operators

    printf("\nUnary Operators:\n");
    printf("Unary Plus (+num1): %d\n", +num1);
    printf("Unary Minus (-num1); %d\n", -num1);

    // Ternary operator

    int max = (num1 > num2) ? num1 : num2;
    printf("\nTernary Operator (max): %d\n", max);

    return 0;
}
