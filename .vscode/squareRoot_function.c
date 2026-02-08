// WRITE A FUNCTION TO FIND SQUAREROOT OF A NUMBER.
#include <stdio.h>
#include <math.h>
void squareRoot(double num);
int main(){
    double num;
    printf("Enter the number to find sqaure root:");
    scanf("%lf",&num);
    squareRoot(num);
    return 0;
}
void squareRoot(double num){
    if(num<0){
        printf("Error : cannot compute square root of negative number.\n");
    }
    else{
        double result = pow(num,0.5);
        printf("The squareroot of %.2f is %.2f.",num,result);
    }
}