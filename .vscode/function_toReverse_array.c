// WRITE A FUNCTION TO REVERSE AN ARRAY.
#include <stdio.h>
# include <stdlib.h>
void reverseArray(int array[], int size){
    int start = 0;
    int end = size-1;
    int temp;
    while(start<end){
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}
void printArray(int array[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main(){
    int size;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    int * array = (int*)malloc(size *sizeof(int));
    printf("Enter the  elements of array: \n");
    for(int i=0; i<size; i++){
        scanf("%d", &array[i]);
    }
    printf("Elements of original array :");
    printArray(array, size);
    reverseArray(array, size);
    printf("Elements of reversed array :");
    printArray(array, size);
    free(array);
    return 0;
}