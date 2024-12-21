#include <stdio.h>
int main()
{
    int subject1, subject2, subject3, subject4;
    float totalMarks, aggregatePercentage;

    // Prompt the user to enter marks for each subject
    printf("Enter marks for Subject 1: ");
    scanf("%d", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &subject3);

    printf("Enter marks for Subject 4: ");
    scanf("%d", &subject4);

    // Calculate total marks
    totalMarks = subject1 + subject2 + subject3 + subject4;

    // Calculate aggregate percentage
    aggregatePercentage = (totalMarks / (4 * 100.0)) * 100.0;

    // Display the results and grades printf("\n--- Student's Performance --\n");
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Aggregate Percentage: %.2f%%\n", aggregatePercentage);

    // Determine the grade
    if (aggregatePercentage >= 90)
    {
        printf("Grade: A+\n");
    }
    else if (aggregatePercentage >= 80)
    {
        printf("Grade: A\n");
    }
    else if (aggregatePercentage >= 70)
    {
        printf("Grade: B\n");
    }
    else if (aggregatePercentage >= 60)
    {
        printf("Grade: C\n");
    }
    else if (aggregatePercentage >= 50)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F (Fail)\n");
    }
    return 0;
}