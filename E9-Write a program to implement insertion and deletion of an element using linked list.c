#include <stdio.h>

#include <stdlib.h>

// Define a structure for a node in the linked list

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertAtBeginning(struct Node *head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

struct Node *deleteElement(struct Node *head, int value)
{
    struct Node *current = head;
    struct Node *previous = NULL;

    while (current != NULL && current->data != value)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        printf("%d not found in the list.\n", value);
        return head;
    }

    if (previous == NULL)
    {
        head = current->next;
    }
    else
    {

        previous->next = current->next;
    }

    free(current);
    return head;
}

// Function to display the linked list
void displayList(struct Node *head)
{
    struct Node *current = head;

    printf("Linked List: ");
    while (current != NULL)
    {
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node *head = NULL;
    int choice, value;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display List\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            printf("Enter the element to insert: ");
            scanf("%d", &value);
            head = insertAtBeginning(head, value);
            break;

        case 2:

            printf("Enter the element to delete: ");
            scanf("%d", &value);
            head = deleteElement(head, value);
            break;

        case 3:

            displayList(head);
            break;

        case 4:

            // Free memory and exit

            while (head != NULL)
            {
                struct Node *temp = head;
                head = head->next;
                free(temp);
            }
            
            exit(0);

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}