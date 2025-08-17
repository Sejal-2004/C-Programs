#include <stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Enter the third number :");
    scanf("%d",&c);
    avg = (a+b+c)/3;
    printf("The average of given three numbers is %f",avg);
    return 0;
}