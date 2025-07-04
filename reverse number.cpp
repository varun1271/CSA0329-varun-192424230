#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Values stored in array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nValues stored in array are reversed:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

}
