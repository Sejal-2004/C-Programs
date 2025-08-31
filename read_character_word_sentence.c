// PROGRAM TO READ A SINGLE CHARACTER, A WORD AND A SENTENCE AND PRINT THE ENTERED WORD.
#include <stdio.h>
int main(){
    char ch;
    char word[50];
    char sentence[200];
    printf("Enter a character:");
    scanf(" %c",&ch);// note space before %c to skip whitespace
    printf("Enter a word:");
    scanf("%s",&word);
    printf("Enter a sentence:");
    scanf(" %[^\n]%*c",&sentence);// reads full line including spaces until newline
    printf("Character : %c\n",ch);
    printf("Word : %s\n",word);
    printf("Sentence : %s\n",sentence);
    return 0;
}