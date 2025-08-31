// PROGRAM TO PRINT THE SUM OF ALL NUMBERS BETWEEN 5 TO 50 INCLUDING BOTH .
#include <stdio.h>
int main()
{
    int sum=0;
    for(int i=5;i<=50;i++){
        sum+=i;
    }
    printf("The sum of all number between 5 to 50 is %d. ",sum);
    return 0;
}