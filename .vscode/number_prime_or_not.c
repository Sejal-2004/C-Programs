// PROGRAM TO CHECK IF A NUMBER IS PRIME OR NOT.
# include <stdio.h>
int main(){
    int num,count = 0;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num<=1){
        printf("Not a prime number.\n");
    }
    else{
        for(int i=1;i<=num;i++){
            if(num%i==0){
                count++;
            }
        }
        if(count == 2){
            printf("Prime number\n");
        }
        else{
            printf("Not a prime number\n");
        }
    }
    return 0;
}