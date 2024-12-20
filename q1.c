#include <stdio.h>

int main() {
    int n, key, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key value to check against: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            count++;
        }
    }

    printf("Number of values not equal to %d: %d\n", key, count);

    return 0;
}
