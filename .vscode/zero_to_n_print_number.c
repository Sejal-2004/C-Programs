// PROGRAM TO PRINT THE NUMBER FROM 0 TO n WHERE n IS ENTERED BY THE USER.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}