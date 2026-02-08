// PROGRAM TO MAKE YOUR OWN POWER FUNCTION.
#include <stdio.h>
double power(double base, int exponent);
int main()
{
    double base;
    int exponent;
    printf("Enter the base:");
    scanf("%lf", &base);
    printf("Enter the exponent:");
    scanf("%d", &exponent);
    if (exponent < 0)
    {
        printf("Error! This function supports only non-negative exponent.\n");
    }
    else
    {
        printf("%lf raises to the power %d is %lf.", base, exponent, power(base, exponent));
        return 0;
    }
}
    double power(double base, int exponent)
    {
        double result = 1;
        for (int i = 1; i <= exponent; i++)
        {
            result *= base;
        }
        if (exponent == 0)
        {
            return 1;
        }
        return result;
    }