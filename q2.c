#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the sorted elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    j = 1;

    for(i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]) {
            arr[j] = arr[i];
            j++;
        }
    }

    printf("Array after removing duplicates: ");
    for(i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
