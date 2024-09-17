#include<stdio.h>

void acceptarr(int arr[]);
void printarr(int arr[]);
int* linearsearch(int arr[], int key);

int main(){
    int arr[5];
    int key;
    acceptarr(arr);
    printf("Array : ");
    printarr(arr);
    printf("Enter the number to search: ");
    scanf("%d", &key);
    int* result = linearsearch(arr, key);
    if(result != NULL)
        printf("Element found at address %p\n", result);
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

int* linearsearch(int arr[], int key){
    for(int i=0; i<5; i++){
        if(arr[i] == key)
            return &arr[i]; // return the address of the element
    }
    return NULL; // return NULL if element is not found
}
