//Linear Search
/*
    Variations in Linear Search
    1. Standard Linear Search
    2. Search in a string
    3. Search in a Range
    4. Min/Max
    5. Search in 2D arrays
    6. Even Digits
    7. Max Wealth
*/
#include<stdio.h>

int linearSearch(int arr[], int target, int len)
{
    for(int i=0; i<len; i++){
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int arr[]={3,5,12,54,84,22,9,16};
    int len = sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("Enter the target element:");
    scanf("%d", &target);
    int index = linearSearch(arr,target,len);
    if(index != -1){
        printf("Element found at index %d",index);
    }
    else{
        printf("Element not found!");
    }
    return 0;
}