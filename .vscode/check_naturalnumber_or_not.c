// PROGRAM TO CHECK IF THE GIVEN NUMBER IS NATURAL NUMBER OR NOT.
# include <stdio.h>
int main (){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num >= 1){
        printf("%d is a natural number.",num);
    }
    else{
        printf("%d is not a natural number.",num);
    }
    return 0;
}