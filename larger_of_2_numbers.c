//  PROGRAM TO ENTER TWO NUMBER AND PRINT THE VALUE OF LARGER NUMBER USING CONDITIONAL OPERATION
#include <stdio.h>
int main()
{
    int num1, num2, larger;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    larger=num1>num2?num1:num2;
    printf("The larger number of given two number is %d",larger);
    return 0;
}