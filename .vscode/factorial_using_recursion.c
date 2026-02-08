// PROGRAM TO FIND THE FACTORIAL OF GIVEN NUMBER USING RECURSION.
#include <stdio.h>
int fact(int n);
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("The factorial of %d is %d.",num,fact(num));
    return 0;
}
int fact(int n){
    if(n == 0){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
    return factN;
}