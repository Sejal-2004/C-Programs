#include <stdio.h>
int main(){
    int num1, num2, small;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    small=num1<num2?num1:num2;
    printf("Smallest number is %d .",small);
    return 0;
}