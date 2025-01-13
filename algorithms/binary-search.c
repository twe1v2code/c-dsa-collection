#include <stdio.h>

int binary_search(int *arr, int size, int target);

int main(void)
{
    int arr[] = {2, 4, 5, 10, 25, 59, 65};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", binary_search(arr, size, 65));
    return 0;
}

int binary_search(int *arr, int size, int target)
{
    int low, high, mid;

    low = 0;
    high = size - 1;

    while(low <= high){
        mid = low + (high - low) / 2;
        if(arr[mid] == target) return mid;

        if(arr[mid] < target)
            low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

