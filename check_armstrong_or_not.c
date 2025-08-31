// PROGRAM TO CHECK WEATHER THE ENTERED NUMBER IS ARMSTRONG OR NOT.
# include <stdio.h>
#include <math.h>
int main(){
    int num, remainder,count = 0;
    float result = 0.0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int original_num = num;
    while (original_num != 0){
        original_num /= 10;
        count++;
    }
    original_num = num;
    while(original_num != 0){
        remainder = original_num % 10;
        result += pow(remainder,count);
        original_num /= 10;
    }
    if( result == num){
        printf("The entered number is an armstrong number.");
    }
    else{
        printf("The entered number is not an armstrong number.");
    }
    return 0;
}