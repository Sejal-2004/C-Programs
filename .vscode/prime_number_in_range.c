// PROGRAM TO PRINT THE PRIME NUMBER IN A RANGE.
#include <stdio.h>
int main(){
    int start,end;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);
    printf("Prime numbers from %d to %d are :\n",start,end);
    for(int i=start;i<=end;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }
    return 0;
}