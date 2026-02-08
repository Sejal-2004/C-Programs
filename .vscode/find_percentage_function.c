// WRITE A FUNCTION TO CALCULATE THE PERCENTAGE OF A STUDENT FROM MARKS IN SCIENCE, MATH, SANSKRIT.
#include <stdio.h>
int percentage(int sc, int m, int s);
int main(){
    int science, math, sanskrit;
    printf("Enter the marks of science:");
    scanf("%d",&science);
    printf("Enter the marks of math:");
    scanf("%d",&math);
    printf("Enter the marks of sanskrit:");
    scanf("%d",&sanskrit);
    printf("The percentage of the student is %d",percentage(science,math,sanskrit));
    return 0;
}
int percentage(int sc, int m, int s){
    return(sc+m+s)/3;
}