// PROGRAM TO PRINT HELLO WORLD 5 TIMES USING RECURSION.
#include <stdio.h>
void printHelloWorld(int count);
int main(){
    printHelloWorld(5);
    return 0;
}
void printHelloWorld(int count){
    if(count == 0){
        return;
    }
    printf("Hello world !\n");
    printHelloWorld(count-1);
}