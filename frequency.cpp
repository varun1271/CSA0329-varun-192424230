#include <stdio.h>

int main() {
    int arr[100], n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nFrequencies:\n");
    for(i = 0; i < n; i++) {
        count = 1;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j])
                break;
        }
        if(i == j) {
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j])
                    count++;
            }
            printf("%d == %d times\n", arr[i], count);
        }
    }

}
