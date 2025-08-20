//PROGRAM TO FIND THE AREA AND PERIMETER OF THE RECTANGLE WHEN LENGTH AND BREADTH IS GIVEN.
#include <stdio.h>
int main(){
    float length,breadth,area,perimeter;
    printf("Enter the length of rectangle:");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle:");
    scanf("%f",&breadth);
    area = length * breadth;
    perimeter = 2*(length + breadth);
    printf("The area of the rectangle with length %f and breadth %f is %f \n",length,breadth,area);
    printf("The perimeter of the rectangle with length %f and breadth %f is %f",length,breadth,perimeter);
    return 0;
}