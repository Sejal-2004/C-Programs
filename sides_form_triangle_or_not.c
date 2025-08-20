// PROGRAM TO ACCEPT THREE SIDES AND FIND WHETHER THE THE SIDES FORM THE TRIANGLE OR NOT.
#include <stdio.h>
int main (){
    int side1, side2, side3;
    printf("Enter the first side:");
    scanf("%d",&side1);
    printf("Enter the second side:");
    scanf("%d",&side2);
    printf("Enter the third side:");
    scanf("%d",&side3);
    if((side1+side2>side3)&&(side2+side3>side1)&&(side3+side1>side2)){
        printf("Yes, the given sides can form the triangle.");
    }
    else{
        printf("No, the given sides can't form the triangle.");
    }
    return 0;

}
