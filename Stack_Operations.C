#include <stdio.h>

#define MAX 5

// Stack structure
struct stack {
    int arr[MAX];
    int top;
};

void main() {
    struct stack s;
    int choice, value, i;

    s.top = -1; // initialize stack

    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: // PUSH
                if (s.top == MAX - 1) {
                    printf("Stack Overflow!\n");
                } else {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    s.top++;
                    s.arr[s.top] = value;
                    printf("Pushed successfully\n");
                }
                break;

            case 2: // POP
                if (s.top == -1) {
                    printf("Stack Underflow!\n");
                } else {
                    printf("Popped element: %d\n", s.arr[s.top]);
                    s.top--;
                }
                break;

            case 3: // DISPLAY
                if (s.top == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack elements:\n");
                    for (i = s.top; i >= 0; i--) {
                        printf("%d\n", s.arr[i]);
                    }
                }
                break;

            case 4: // EXIT
                    printf("Program Exited");
                    break;

            default:
                printf("Invalid choice\n");
        }
    }
}
