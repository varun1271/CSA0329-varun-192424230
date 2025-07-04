#include <stdio.h>

int main() {
    int n, key, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &key);

   
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d (position %d)\n", i, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
