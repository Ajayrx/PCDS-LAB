#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// Structure for the queue
struct Queue
{
    int arr[MAX_SIZE];
    int front, rear;
};

// Function to initialize the queue
void initialize(struct Queue *q)
{
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *q)
{
    return q->front = -1;
}

// Function to check if the queue is full
int isFull(struct Queue *q)
{
    return (q->rear + 1) % MAX_SIZE == q->front;
}

// Function to insert an element at the rear of the queue (enqueue)
void enqueue(struct Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full. Cannot enqueue element.\n");
    }
    else
    {
        if (isEmpty(q))
        {
            q->front = 0;
        }
        q->rear = (q->rear + 1) % MAX_SIZE;
        q->arr[q->rear] = value;
        printf("Enqueued element: %d\n", value);
    }
}

// Function to delete an element from the front of the queue (dequeue)
int dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    }
    else
    {
        int dequeuedValue = q->arr[q->front];
        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        else
        {

            q->front = (q->front + 1) % MAX_SIZE;
        }
        return dequeuedValue;
    }
}
void display(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue Elements: ");
        int i = q->front;
        while (i != q->rear)
        {
            printf("%d ", q->arr[i]);
            i = (i + 1) % MAX_SIZE;
        }
        printf("%d\n", q->arr[q->rear]);
    }
}
int main()
{

    struct Queue queue;
    initialize(&queue);
    int choice, value;

    while (1)
    {

        printf("\nMenu:\n");
        printf("1. Enqueue Element\n");
        printf("2. Dequeue Element\n");
        printf("3. Display Queue\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter the element to enqueue: ");
            scanf("%d", &value);
            enqueue(&queue, value);
            break;

        case 2:

            value = dequeue(&queue);
            if (value != -1)
            {
                printf("Dequeued element: %d\n", value);
            }

            break;

        case 3:

            display(&queue);

            break;
        case 4:

            exit(0);

        default:

            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}