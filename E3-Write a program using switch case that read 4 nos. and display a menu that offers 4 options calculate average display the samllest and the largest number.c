#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    int choice;
    float total, average;
    int smallest, largest;

    // Prompt by Ajay user to enter 4 numbers
    printf("Enter four numbers:\n");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    // Display a menu of options
    printf("\nMenu: \n");
    printf("1.Calculate Total\n");
    printf("2.Calculate Average\n");
    printf("3.Display Smallest Number\n");
    printf("4.Display Largest Number\n");
    printf("Enter your choice (1-4):");
    scanf("%d", &choice);

    // Perform the selected operation using a switch-case statement.
    switch (choice)
    {
    case 1:
        total = num1 + num2 + num3 + num4;
        printf("Total: %.2f\n", total);
        break;
    case 2:
        average = (num1 + num2 + num3 + num4) / 4.0;
        printf("Avergae: %.2f\n", average);
        break;
    case 3:
        smallest = (num1 < num2) ? num1 : num2;
        smallest = (smallest < num3) ? smallest : num3;
        smallest = (smallest < num4) ? smallest : num4;
        printf("Smallest Number: %d\n", smallest);
        break;
    case 4:
        largest = (num1 > num2) ? num1 : num2;
        largest = (largest > num3) ? largest : num3;
        largest = (largest > num4) ? largest : num4;
        printf("Largest Number: %d\n", largest);
        break;

    default:
        printf("Invalid choice! Please select a valid option (1-4).\n");
        break;
    }
    return 0;
}