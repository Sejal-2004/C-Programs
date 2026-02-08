// WRITE A FUNCTION TO COUNT THE NUMBER OF ODD NUMBERS IN AN ARRAY
# include <stdio.h>
# include <stdlib.h>
int countOdd(int arr[], int size){
    int count = 0;
    for(int i= 0; i<size; i++){
        if(arr[i]%2 != 0){
            count++;
        }
    }
    return count;
}
int main(){
    int size;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    int *arr = (int*)malloc(size * sizeof(int));// dynamic memory allocation
    printf("Enter %d integers :", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int count = countOdd(arr, size);
    printf("the number of odds in array : %d \n", count);
    free(arr);
    return 0;
}