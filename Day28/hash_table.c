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
