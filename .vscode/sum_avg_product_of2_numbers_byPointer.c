// WRITE A FUNCTION TO CALCULATE SUM PRODUCT, AVERAGE OF 2 NUMBERS.PRINT THAT SUM, PRODUCT & AVERAGEN IN THE MAIN FUNCTION USING POINTER.
#include <stdio.h>
void calculate(int a, int b, int *sum, int *prod, float *avg);
int main(){
    int a,b,sum,prod;
    float avg;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    calculate(a,b,&sum,&prod,&avg);
    printf("The sum of %d and %d is %d.\n",a,b,sum);
    printf("The product of %d and %d is %d\n.",a,b,prod);
    printf("The average of %d and %d is %.2f\n.",a,b,avg);
    return 0;
}
void calculate(int a, int b, int *sum, int *prod, float *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2.0;
}