#include<stdio.h>

int remove_duplicates(int arr[], int n) {
    int i, j, k;
    int count = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == i) {
            arr[count++] = arr[i];
        }
    }
    return count;
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
	}

int main() {
    int arr[5];
	acceptarr(arr);
	printf("Array : ");
	printarr(arr);
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique_count = remove_duplicates(arr, n);
    printf("Unique elements: ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}











