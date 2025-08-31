// PROGRAM TO PRINT ALL ODD NUMBERS FROM 5 TO 50.
#include <stdio.h>
int main(){
    printf("Odd numbers from 5 to 50 :\n");
    for(int i=5; i<=50;i++){
        if(i%2 != 0){
            printf("%d ",i);
        }
    }
    return 0;
}