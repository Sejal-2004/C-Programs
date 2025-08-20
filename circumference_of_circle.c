#include <stdio.h>
int main(){
    float radius,circumference;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    circumference=2*3.14*radius;
    printf("The circumference of the circle with given radius %f is %f",radius,circumference);
    return 0;
}