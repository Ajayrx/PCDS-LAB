#include <stdio.h>
int main(){
    int dayNumber;

    //promt the user to enter a number from 1 to 7 
    printf("Enter a number (1-7) to represent a day of the week: ");
    scanf("%d",&dayNumber);

    //Display the corresponding day of week usimg a switch-case statement
    switch (dayNumber)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thrusday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid input! Please Enter a number between 1 and 7.\n");
        break;
    }
}