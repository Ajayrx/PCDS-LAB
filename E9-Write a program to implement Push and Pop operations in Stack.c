#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack
{
    int arr[MAX_SIZE];
    int top;
};

void initialize(struct Stack *s)
{
    s->top = -1;
}

int isEmpty(struct Stack *s)
{
    return s->top == -1;
}
int isFull(struct Stack *s){
    return s -> top == MAX_SIZE - 1;

}
void push(struct Stack *s, int value)
{
    if (isFull(s))
    {
        printf("Stack is full. Cannot push element.\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = value;
        printf("Pushed element: %d\n", value);
    }

} // Function to pop an element from the stack
int pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty. Cannot pop element.\n");
        return -1;
    }
    else
    {
        int poppedValue = s->arr[s->top];
        s->top -- ;
        return poppedValue;
    }
}

void display(struct Stack *s)
{

    if (isEmpty(s))
    {

        printf("Stack is empty.\n");
    }
    else
    {

        printf("Stack Elements: ");
        for (int i = 0; i <= s->top; i++)
        {
            printf("%d ", s->arr[i]);
            printf("\n");
        }
    }
}
int main()
{

    struct Stack stack;
    int choice, value;

    initialize(&stack);

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Push Element\n");
        printf("2. Pop Element\n");
        printf("3. Display Stack\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            printf("Enter the element to push: ");
            scanf("%d", &value);
            push(&stack, value);

            break;

        case 2:

            value = pop(&stack);

            if (value != -1)
            {

                printf("Popped element: %d\n", value);
            }

            break;

        case 3:

            display(&stack);

            break;

        case 4:

            exit(0);
        default:

            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}