#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 3, 2, 4, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    printf("Duplicate elements are: ");
    for(i=0;i<size;i++) {
    for(j=i+1;j<size;j++) {
    if(arr[i]==arr[j]) {
    printf("%d",arr[i]);
    break; 
    }
    }
    }
    return 0;
}
