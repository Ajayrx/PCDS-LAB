#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char *str)
{
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;

    while (start < end)
    {
        if (*start != *end)
        {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }

    return 1; // Palindrome
}

int main()
{
    char input[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", input);

    // Check if the entered string is a palindrome
    if (isPalindrome(input))
    {
        printf("%s is a palindrome.\n", input);
    }
    else
    {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
