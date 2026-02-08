//  WRITE A FUNCTION TO SWAP TWO NUMBERS a & b USING POINTER.
#include <stdio.h>
void swap(int *a, int *b);
int main(){
    int a,b;
    printf("Enter the number a:");
    scanf("%d",&a);
    printf("Enter the number b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a and b after swaping is %d and %d respectively.",a,b);
    return 0;
}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}