// PROGRAM TO PRINT THE REVERSE TABLE OF THE NUMBER ENTERED BY USER.
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    for(int i=10;i>=1;i--){
        printf("%d\n",i*num);
    }
    return 0;
}
