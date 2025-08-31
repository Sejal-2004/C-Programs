// PROGRAM TO KEEP TAKING NUMBER AS INPUT FROM USER UNTIL USER ENTERS A NUMBER MULTIPLE OF 7.
# include <stdio.h>
 int main(){
    int num;
    do{
        printf("Enter a number :");
        scanf("%d",&num);
        printf("You entered : %d \n",num);
        if(num % 7 == 0){
            break;
        }
    }while(1);
    printf("Thank You !!");
    return 0;
 }