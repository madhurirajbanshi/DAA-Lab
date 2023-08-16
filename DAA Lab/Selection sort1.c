#include <stdio.h>

int main() {
    int arr[] = {1, 5, 3, 76, 9, 50};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n - 1; i++) {
        int min = arr[i];
        int p = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                p = j;
            }
        }

        if (p != i) {
            int temp = arr[i];
            arr[i] = arr[p];
            arr[p] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }

    return 0;
}

