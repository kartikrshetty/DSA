#include <stdio.h>
#define max 4

int stack[max];
int top = -1;

void push(int data)
{
    if (top == max - 1) {
        printf("Stack overflow\n");
        return;
    }

    top++;
    stack[top] = data;
    printf("%d is added to the stack\n", data);
}

void pop()
{
    if (top == -1) {
        printf("Stack underflow\n");
        return;
    }

    printf("%d is removed from the stack\n", stack[top]);
    top--;
}

void display()
{
    if (top == -1) {
        printf("The stack is empty\n");
    }
    else {
        printf("The elements of the stack are:\n");

        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice, data;

    while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the data to push: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
