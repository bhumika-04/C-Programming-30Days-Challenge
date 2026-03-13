🚀 **Day 27: Binary Trees in C!**

Hello Everyone! 👋

Day 27 of my 30 Days of C challenge! Today I learned about Binary Trees — one of the most important data structures! 🌐
After Linked Lists on Day 18, Trees felt like the next natural step. Each node can have two children — left and right!

### Key Learnings:

1. **What is a Binary Tree?**
   - A tree where each node has at most 2 children — left child and right child.
   - The topmost node is called the root.

2. **Binary Search Tree (BST):**
   - A special binary tree where left child is always smaller than parent and right child is always greater.
   - Makes searching very efficient!

3. **Inserting in BST:**
   - Compare with current node, go left if smaller, go right if greater.

4. **Tree Traversals:**
   - **Inorder (Left → Root → Right):** Gives sorted output for BST!
   - **Preorder (Root → Left → Right)**
   - **Postorder (Left → Right → Root)**

### Code Snippet - Binary Search Tree:

```c
#include <stdio.h>
#include <stdlib.h>

// tree node structure
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// insert in BST
struct Node* insert(struct Node *root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// inorder traversal - gives sorted output!
void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// preorder traversal
void preorder(struct Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    struct Node *root = NULL;

    // inserting values
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Inorder traversal (sorted): ");
    inorder(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    return 0;
}
```

### Reflecting on the Journey:

Day 27 was one of the most exciting days! Binary trees combine recursion and data structures together. The fact that inorder traversal of a BST gives sorted output is so elegant! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #BinaryTree #BST #DataStructures #TreeTraversal #ProgrammingJourney #LinkedInLearning
