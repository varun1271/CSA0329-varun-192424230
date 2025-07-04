#include <stdio.h>

#define SIZE 100

int data[SIZE], next[SIZE];
int head = -1, freeIndex = 0;

void insert(int value) {
    if (freeIndex >= SIZE) {
        printf("List overflow: No space to insert more items.\n");
        return;
    }
    int newNode = freeIndex++;
    data[newNode] = value;
    next[newNode] = head;
    head = newNode;
    printf("Inserted %d\n", value);
}

void deleteNode(int value) {
    int curr = head, prev = -1;
    while (curr != -1 && data[curr] != value) {
        prev = curr;
        curr = next[curr];
    }

    if (curr == -1) {
        printf("Value %d not found.\n", value);
        return;
    }

    if (prev == -1) head = next[curr];  // Deleting the head node
    else next[prev] = next[curr];       // Skipping over the deleted node

    printf("Deleted %d\n", value);
}

int search(int value) {
    int curr = head;
    while (curr != -1) {
        if (data[curr] == value)
            return curr;
        curr = next[curr];
    }
    return -1;
}

void display() {
    int curr = head;
    if (curr == -1) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (curr != -1) {
        printf("%d -> ", data[curr]);
        curr = next[curr];
    }
    printf("NULL\n");
}

int main() {
    int choice, value, result;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) break;

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &value);
                result = search(value);
                if (result != -1) printf("Found %d at index %d\n", value, result);
                else printf("%d not found.\n", value);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
