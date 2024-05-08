#include <stdio.h>
#include <stddef.h>

int binary_search(int *array, size_t size, int value) {
    int left = 0;
    int right = size - 1;
    int i; // Declare loop variable outside the loop

    if (array == NULL)
        return -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (i = left; i <= right; i++) { // Use the loop variable declared earlier
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
