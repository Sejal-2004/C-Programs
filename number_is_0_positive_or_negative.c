// PROGRAM TO CHECK WETHER THE ENTERED NUMBER IS POSITIVE, NEGATIVE OR 0.
#include <stdio.h>
int main (){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num == 0){
        printf("The entered number is 0.");
    }
    else if(num>0){
        printf("The entered number is positive.");

    }
    else if(num<0){
        printf("The entered number is negative.");
    }
    else{
        printf("invalid input !");
    }
    return 0;
}