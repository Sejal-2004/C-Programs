// WRITE A PROGRAM TO PRINT ALL THE LETTERS IN ENGLISH ALPHABET USING POINTER.
#include <stdio.h>
int main(){
    char alphabet[26];
    char *ptr;
    for(int i=0;i<26;i++){
        alphabet[i] = 'A'+i;
    }
    ptr = alphabet;
    printf("The letters of english alphabet are :\n");
    for(int i=0;i<26;i++){
        printf("%c ",*(ptr + i));
    }
    printf("\n");
    return 0;
}