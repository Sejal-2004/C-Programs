// PROGRAM TO FIND THE SUM OF FIRST N NATURAL NUMBER USING RECURSION.
#include <stdio.h>
int sum(int n);
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The sum of first %d natural number is %d.",num,sum(num));
    return 0;
}
int sum(int n){
    if (n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}