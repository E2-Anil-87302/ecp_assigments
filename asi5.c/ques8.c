#include<stdio.h>

void acceptarr(int arr[]);
void printarr(int arr[]);
int linearsearch(int arr[], int key);

int main(){
    int arr[5];
    int key;
    acceptarr(arr);
    printf("Array : ");
    printarr(arr);
    printf("Enter the number to search: ");
    scanf("%d", &key);
    int result = linearsearch(arr, key);
    if(result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}

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

int linearsearch(int arr[], int key){
    for(int i=0; i<5; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}
