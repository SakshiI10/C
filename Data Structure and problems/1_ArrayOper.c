//Array Traversal, Insertion, Deletion and Searching.

#include<stdio.h>

void traversal(int arr[100], int size){
    printf("Array traversal: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void insertion(int arr[100], int size, int index, int element){
    for(int i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}

void deletion(int arr[100], int size, int index, int element){
    for(int i=index; i<=size-1; i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int arr[100], size, i;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    traversal(arr, size);
    insertion(arr, size, 2, 10);
    size+=1;
    printf("\n");
    traversal(arr, size);
    deletion(arr, size, 2, 10);
    size-=1;
    printf("\n");
    traversal(arr, size);
    return 0;
}