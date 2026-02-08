// PRINT THE VALUE OF 'i' FROM ITS POINTER TO POINTER;
#include <stdio.h>

int main(){
    int i;
    printf("Enter a number:");
    scanf("%d",&i);
    int *ptr = &i;
    int **pptr = &ptr;
    printf("The value of i using pointer to pointer is %d.",*(*pptr));
    return 0;
}