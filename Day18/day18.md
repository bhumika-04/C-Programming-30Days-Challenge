🚀 **Day 18: Introduction to Linked Lists in C!**

Hello Everyone! 👋

Day 18 of my 30 Days of C challenge! Today I learned about Linked Lists — my first real Data Structure in C! 🌐
Arrays are fixed in size but Linked Lists can grow and shrink. I found this concept really interesting!

### Key Learnings:

1. **What is a Linked List?**
   - A linked list is a collection of nodes. Each node has two parts — data and a pointer to the next node.

2. **Node Structure:**
   - We create a node using `struct` with a data field and a `next` pointer.

3. **Creating a Node:**
   - Used `malloc()` to dynamically create nodes at runtime.

4. **Inserting a Node:**
   - Inserting at the beginning is easy — just point the new node to the current head.

5. **Displaying the List:**
   - Traverse from head to NULL, printing each node's data.

### Code Snippet - Simple Linked List:

```c
#include <stdio.h>
#include <stdlib.h>

// node structure
struct Node {
    int data;
    struct Node *next;
};

// function to create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// insert at beginning
struct Node* insertAtBeginning(struct Node *head, int value) {
    struct Node *newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    return head;
}

// display the list
void displayList(struct Node *head) {
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    // adding some nodes
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);

    displayList(head);

    return 0;
}
```

### Reflecting on the Journey:

Day 18 was challenging but very exciting! Linked Lists finally made sense to me — each node just points to the next one. The combination of structs and pointers makes this possible. Loving C more and more! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #LinkedList #DataStructures #ProgrammingJourney #LinkedInLearning
