// PROGRAM TO PRINT THE SUM OF FIRST n NATURAL NUMBERS AND ALSO, PRINT THEM IN REVERSE.
# include <stdio.h>
int main (){
    int n, sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The first n natural numbers in reverse order is given below :\n");
    for(int i=n;i>=1;i--){
        printf("%d ",i);
        sum += i;
    }
    printf("\nThe sum of first n natural numbers is %d.",sum);
    return 0;
}