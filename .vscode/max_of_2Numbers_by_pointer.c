// WRITE A PROGRAM TO FIND THE MAXIMUM BETWEEN TWO NUMBERS USING POINTER.
#include <stdio.h>
int max(int *a, int *b);
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    int maximum = max(&a,&b);
    if(maximum == 0){
        printf("Both %d and %d are equal.",a,b);
    }
    else{
        printf("The maximun number between %d and %d is %d.",a,b,maximum);
    }
    return 0;
}
int max(int *a, int *b){
    if(*a == *b){
        return 0;
    }
    else{
        if(*a > *b){
            return *a;
        }
        else{
            return *b;
        }
    }
}