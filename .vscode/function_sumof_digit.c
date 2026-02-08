// WRITE A FUNCTION TO FIND THE SUM OF DIGIT OF A NUMBER.
#include <stdio.h>
int sumOfDigit(int num);
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The sum of digit of %d is %d.",num,sumOfDigit(num));
    return 0;
}
int sumOfDigit(int num){
    int sum = 0;
    while(num!= 0){
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;

}