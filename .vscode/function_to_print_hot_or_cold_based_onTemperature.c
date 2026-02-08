// WRITE A FUNCTION TO PRINT 'HOT' OR 'COLD' DEPENDING ON THE TEMPERATURE USER ENTERS.
#include <stdio.h>
void checkTemperature(int temp);
int main(){
    int temp;
    printf("Enter the temperature in the celsius:");
    scanf("%d",&temp);
    checkTemperature(temp);
    return 0;
}
void checkTemperature(int temp){
    if(temp >= 30){
        printf("HOT");
    }
    else{
        printf("COLD");
    }
}