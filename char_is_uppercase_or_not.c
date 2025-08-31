// PROGRAM TO CHECK WEATHER THE ENTERED CHARACTER BY USER IS UPPERCASE OR NOT.
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z'){// not use double quotes as it will represent the string literal(type char* that is a pointer)
        printf("The entered character is uppercase.");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("The entered character is lowercase.");
    }
    else{
        printf("Invalid Input !!");
    }
    return 0;
}