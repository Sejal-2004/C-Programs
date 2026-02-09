// WRITE PROGRAM TO STORE n FIBONACCI SERIES.
# include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the n (n>2) :");
    scanf("%d", &n);
    int * fib  = (int*)malloc(n * sizeof(int));
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("Fibonacci series uptp %d numbers :", n);
    for(int i=0; i<n; i++){
        printf("%d ", fib[i]);
    }
    free(fib);
    return 0;
}
