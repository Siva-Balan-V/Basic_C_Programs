#include <stdio.h>

int main() {
    int n,i,fact;
    fact=1;
    printf("Enter an positive integer :");
    scanf("%d",&n);
    if (n<0){
        printf("\nNot Defined");
    }
    else if (n==0){
        printf("Factorial of 0 : %d",fact);
    }
    else{
        for (i=n;i>0;i--){
            fact*=i;
        }
        printf("Factorial of %d : %d",n,fact);
    }
    return 0;
}
