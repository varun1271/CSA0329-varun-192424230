#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {7, 2, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Bubble Sort: ");
    display(arr, n);

    bubbleSort(arr, n);

    printf("After Bubble Sort: ");
    display(arr, n);

    return 0;
}

