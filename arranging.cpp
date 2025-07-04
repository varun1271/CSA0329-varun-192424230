#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, temp, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    srand(time(NULL));

  
    for (i = n - 1; i > 0; i--) {
        j = rand() % (i + 1);
        
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Array in randomized order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
