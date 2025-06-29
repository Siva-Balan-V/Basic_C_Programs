#include <stdio.h>

int main() {
    int num,sum;
    printf("Enter a positive integer :");
    scanf("%d",&num);
    sum=0;
    while (num>0){
        sum=(sum)+(num%10);
        num=(num/10);
    }
    printf("\nSum of numbers : %d",sum);
    return 0;
}
