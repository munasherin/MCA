#include <stdio.h>

#define SIZE 5

int q[SIZE];
int front = -1, rear = -1;

void enqueue(int item) {
    if ((rear + 1) % SIZE == front) 
    {
        printf("Queue is full\n");
    }
     else 
    {
        if (front == -1 && rear == -1) 
        {
            front = rear = 0;
        }
         else
          {
            rear = (rear + 1) % SIZE;
        }
        q[rear] = item;
        printf("Inserted %d\n", item);
    }
}

void dequeue() {
    if (front == -1 && rear == -1) 
    {
        printf("Queue is empty\n");
    } 
    else
     {
        printf("Deleted item: %d\n", q[front]);
        if (front == rear) 
        {
            front = rear = -1; // queue becomes empty
        } else {
            front = (front + 1) % SIZE;
        }
    }
}

void display() 
{
    if (front == -1 && rear == -1)
     {
        printf("Queue is empty\n");
    } 
    else
     {
        printf("Queue elements: ");
        int i = front;
        while (1) {
            printf("%d ", q[i]);
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() 
{
    int choice, item;
    do
     {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter item to insert: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } 
    while (choice != 4);

    return 0;
}
