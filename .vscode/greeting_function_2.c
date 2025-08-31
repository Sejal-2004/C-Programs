// PROGRAM TO WRITE FUNCTION THAT PRINT 'NAMASTE' IF USER IS INDIAN AND 'BONJOUR' IF USER IS FRENCH.
#include <stdio.h>
void greet();
int main(){
    greet();
    return 0;
}
void greet(){
    char ch;
    printf("Enter 'I' for indian and 'F' for french :");
    scanf("%c",&ch);
    if(ch=='I' || ch=='i'){
        printf("NAMASTE !\n");
    }
    else if(ch=='F' || ch=='f'){
        printf("BONJOUR !\n");
    }
    else{
        printf("Inappropriate input !!");
    }
}