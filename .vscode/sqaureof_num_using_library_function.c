// PROGRAM TO FIND THE SQUARE OF A NUMBER GIVEN BY USER USING LIBRARY FUNCTION.
#include <stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("The square of %d is %f.",num,pow(num,2));
    return 0;
}