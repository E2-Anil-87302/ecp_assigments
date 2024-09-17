#include <stdio.h>

void acceptarr(int arr[], int size);
void printarr(int arr[], int size);
int max(int arr[], int size);
int min(int arr[], int size);

int main(){
    int arr[5];
    acceptarr(arr, 5);
    printf("Array : ");
    printarr(arr, 5);
    int maximum, minimum;
    maximum = max(arr, 5);
    printf("\nMax Element :  %d\n", maximum);
    minimum = min(arr, 5);
    printf("Min Element :  %d\n", minimum);
    return 0;
}

void acceptarr(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}

void printarr(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int max(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
