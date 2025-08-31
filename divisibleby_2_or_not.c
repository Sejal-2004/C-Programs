// PROGRAM TO  CHECK WEATHER THE GIVEN NUMBER IS DIVISIBLE BY 2 OR NOT.
# include <stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num%2==0){
        printf("The given number %d is divisible by 2.",num);
    }
    else{
        printf("The given number %d is not divisible by 2.",num);
    }
    return 0;
}