🚀 **Day 19: Stacks and Queues in C!**

Hello Everyone! 👋

Day 19 of my 30 Days of C challenge! Today I learned about two very important data structures — Stacks and Queues! 🌐
I've heard these terms before but today I actually implemented them from scratch using arrays.

### Key Learnings:

1. **Stack — LIFO (Last In First Out):**
   - Like a stack of plates — the last one you put gets picked up first.
   - Operations: `push` (add) and `pop` (remove from top).

2. **Queue — FIFO (First In First Out):**
   - Like a queue at a counter — first person to enter is first to leave.
   - Operations: `enqueue` (add to rear) and `dequeue` (remove from front).

3. **Stack using Array:**
   - Used a variable `top` to track the top of the stack.

4. **Queue using Array:**
   - Used `front` and `rear` variables to track both ends.

5. **Overflow and Underflow:**
   - Stack/Queue overflow means it's full. Underflow means it's empty.

### Code Snippet - Stack and Queue using Arrays:

```c
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
```

### Reflecting on the Journey:

Day 19 was a lot of fun! Implementing stacks and queues from scratch using arrays helped me understand how these data structures actually work internally. These are used everywhere in real programs! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #Stack #Queue #DataStructures #ProgrammingJourney #LinkedInLearning
