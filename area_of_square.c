#include <stdio.h>
int main(){
    int side;
    printf("Enter the side of square:");
    scanf("%d",&side);
    printf("The area of square with given side (%d) is %d.",side,side*side);
    return 0;
}