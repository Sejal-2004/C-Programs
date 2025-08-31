// PROGRAM TO CALCULATE THE SQUARE OF GIVEN NUMBER USING MATHS LIBRARY FUNCTION.
# include <stdio.h>
# include <math.h>
int main(){
    int n;
    printf ("Enter the number :");
    scanf("%d",&n);
    printf("The square of %d is %f",n,pow(n,2));
    return 0;
}