// WRITE A FUNCTION TO PRINT Nth TERM OF THE FIBONACCI SERIES BY RECURSION.
#include <stdio.h>
int fib(int n);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("The %d term of the fibonacci series is %d.", num, fib(num));
    return 0;
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}