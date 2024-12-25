#include <stdio.h>
// Define a structure for student data

struct Student {
char name[50];
int rollNumber;
float marks;
};

int main() {
// Declare a variable of the Student structure
struct Student student;

// Prompt the user to enter student data
printf("Enter student name: "); 
scanf("%s", student.name);

printf("Enter roll number: ");
scanf("%d", &student.rollNumber);

printf("Enter marks: ");
scanf("%f", &student.marks);

// Display the entered student data
printf("\nStudent Data:\n");
printf("Name: %s\n", student.name);
printf("Roll Number: %d\n", student.rollNumber); 
printf("Marks: %.2f\n", student.marks);

return 0;

}