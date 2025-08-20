// PROGRAM TO ACCEPT A DIGIT AND DISPLAY IT IN WORD WITH THE HELP OF SWITCH STATEMENT.
#include <stdio.h>
int main (){
    int digit;
    printf("Enter a digit from 0 - 9 :");
    scanf("%d",&digit);
    switch(digit){
        case 0:
        printf("ZERO");
        break;
        case 1:
        printf("ONE");
        break;
        case 2:
        printf("TWO");
        break;
        case 3:
        printf("THREE");
        break;
        case 4:
        printf("FOUR");
        break;
        case 5:
        printf("FIVE");
        break;
        case 6:
        printf("SIX");
        break;
        case 7:
        printf("SEVEN");
        break;
        case 8:
        printf("EIGHT");
        break;
        case 9:
        printf("NINE");
        break;
        default:
        printf("INVALID INPUT !");
    }
    return 0;
}