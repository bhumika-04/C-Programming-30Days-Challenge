🚀 **Day 28: Hash Tables in C!**

Hello Everyone! 👋

Day 28 of my 30 Days of C challenge! Today I learned about Hash Tables — a very powerful data structure for fast data lookup! 🌐
I had heard about hash maps in other languages but today I built a basic one from scratch in C!

### Key Learnings:

1. **What is a Hash Table?**
   - A data structure that stores key-value pairs and allows very fast lookup.
   - Uses a hash function to convert a key into an index (bucket).

2. **Hash Function:**
   - A function that takes a key and returns an index.
   - For integers, a simple hash function is `key % table_size`.

3. **Collision:**
   - When two keys produce the same hash index — this is called a collision.
   - One way to handle it: Linear Probing — if index is occupied, try next one.

4. **Why Hash Tables?**
   - Searching in array: O(n), Binary search: O(log n), Hash table: O(1) on average!
   - That's why dictionaries in Python and HashMaps in Java are so fast!

### Code Snippet - Simple Hash Table:

```c
#include <stdio.h>
#include <string.h>

#define TABLE_SIZE 10

int hashTable[TABLE_SIZE];

// initialize table with -1 (means empty)
void initTable() {
    int i;
    for (i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1;
    }
}

// simple hash function
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// insert a key
void insert(int key) {
    int index = hashFunction(key);

    // linear probing if collision
    while (hashTable[index] != -1) {
        index = (index + 1) % TABLE_SIZE;
    }
    hashTable[index] = key;
    printf("Inserted %d at index %d\n", key, index);
}

// search for a key
int search(int key) {
    int index = hashFunction(key);
    int startIndex = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            return index;  // found!
        }
        index = (index + 1) % TABLE_SIZE;
        if (index == startIndex) break;  // went full circle
    }
    return -1;  // not found
}

void displayTable() {
    int i;
    printf("\nHash Table:\n");
    for (i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] != -1) {
            printf("Index %d: %d\n", i, hashTable[i]);
        } else {
            printf("Index %d: empty\n", i);
        }
    }
}

int main() {
    initTable();

    insert(10);
    insert(20);
    insert(15);
    insert(7);
    insert(25);

    displayTable();

    int result = search(15);
    if (result != -1) {
        printf("\n15 found at index %d\n", result);
    } else {
        printf("\n15 not found\n");
    }

    result = search(99);
    if (result == -1) {
        printf("99 not found in hash table\n");
    }

    return 0;
}
```

### Reflecting on the Journey:

Day 28 was really insightful! Hash tables explain why lookups in dictionaries and hash maps are so fast. Building one from scratch gave me a much deeper understanding of how they work internally. 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #HashTable #DataStructures #HashFunction #ProgrammingJourney #LinkedInLearning
