// WRITE A FUNCTION TO CONVERT CELSIUS TO FAHRENHEIT.
#include <stdio.h>
float convertTemp(float celsius);
int main(){
    float c;
    printf("Enter the temperature in celsius:");
    scanf("%f",&c);
    printf("Temperature in fahrenheit is %f.",convertTemp(c));
    return 0;
}
float convertTemp(float celsius){
    float fahrenheit = celsius*(9.0/5.0)+32;
    return fahrenheit;
}