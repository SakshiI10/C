//Rearrange array such that even positioned are greater than odd.

#include<stdio.h>

void swap(int *l, int *r){
    int temp=*l;
    *l=*r;
    *r=temp;
}

int main(){
    int arr[100], size, i;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<size; i+=2){
        if(arr[i]>arr[i+1]){
            swap(&arr[i], &arr[i+1]);
        }
    }

    printf("The rearranged array is: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}