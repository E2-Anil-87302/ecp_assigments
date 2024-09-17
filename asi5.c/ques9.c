#include<stdio.h>

void acceptarr(int arr[]){
    for(int i=0; i<5; i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
}

void printarr(int arr[]){
    for(int i=0; i<5; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int binarySearch(int arr[], int target, int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[5];
    acceptarr(arr);
    printf("Array : ");
    printarr(arr);
    
    int target;
    printf("Enter the target element: ");
    scanf("%d", &target);
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, target, 0, n - 1);
	
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
