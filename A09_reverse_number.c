#include <stdio.h>

int main() {
    int num,rev;
    printf("Enter a positive integer :");
    scanf("%d",&num);
    rev=0;
    while (num>0){
        rev=(rev*10)+(num%10);
        num=(num/10);
    }
    printf("\nReversed number : %d",rev);
    return 0;
}
