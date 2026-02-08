//  WRITE A PROGRAM TO PRINT THE ELEMENT OF AN ARRAY IN REVERSE ORDER.
# include <stdio.h>
# include <stdlib.h>
void reverseArray(int arr[], int size){
    for(int i=size-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}
int main(){
    int size;
    printf("Enter the size of an array :");
    scanf("%d", &size);
    int *array = (int*)malloc(size * sizeof(int));
    printf("Enter the  elements of array: \n");
    for(int i=0; i<size; i++){
        scanf("%d", &array[i]);
    }
    printf("Elements of array in reverse order are:");
    reverseArray(array, size);
    free(array);
}