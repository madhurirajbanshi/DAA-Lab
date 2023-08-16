#include <stdio.h>

int main() {
    int key, arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);  // Corrected array size calculation
    
    printf("Enter a number: ");
    scanf("%d", &key);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {  // Use '==' for comparison
            printf("Key found at index %d\n", i);
            return 0;  // Return success
        }
    }
    
    printf("Key not found\n");
    return -1;  // Return failure
}
