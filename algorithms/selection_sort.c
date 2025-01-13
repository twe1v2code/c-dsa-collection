#include <stdio.h>

void selection_sort(int arr[], int size)
{
    int i, j;

    for(i = 0; i < size - 1; i++){
        int min = i;
        
        for(j = i + 1; j < size; j++){
            if(arr[j] < arr[min]) min = j;
        }
        // Swap
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(void)
{
    int arr[] = {5, 2, 4, 10, 6, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, size);

    // Print sorted array
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    putchar('\n');
    return 0;
}

