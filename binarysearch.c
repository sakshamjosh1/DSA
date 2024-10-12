//Binary Search

#include <stdio.h>

int binarySearch(int *arr, int target, int len) {
    int start = 0;
    int end = len - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;  
        if (arr[mid] == target) {
            return mid;  
        } 
        else if (target < arr[mid]) {
            end = mid - 1;  
        } 
        else {
            start = mid + 1;  
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 9, 11, 12, 14, 20, 36, 48};
    int len = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int index = binarySearch(arr, target, len);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found!\n");
    }
    
    return 0;
}
