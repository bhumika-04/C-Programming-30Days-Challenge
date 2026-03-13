#include <stdio.h>

#define SIZE 5

// ---- STACK ----
int stack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack is full!\n");
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}

void displayStack() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// ---- QUEUE ----
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full!\n");
    } else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

void displayQueue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    printf("--- STACK ---\n");
    push(10);
    push(20);
    push(30);
    displayStack();
    pop();
    displayStack();

    printf("\n--- QUEUE ---\n");
    enqueue(100);
    enqueue(200);
    enqueue(300);
    displayQueue();
    dequeue();
    displayQueue();

    return 0;
}
