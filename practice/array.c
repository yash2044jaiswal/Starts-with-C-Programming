#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input
    for(int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    printf("\nResult:\n");

    // Print prefix subarrays
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}