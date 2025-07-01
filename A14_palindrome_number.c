#include <stdio.h>

int main() {
    int n,last,temp,rev;
    printf("Enter a natural number :");
    scanf("%d",&n);
    temp=n;
    rev=0;
    while (n>0){
        last=n%10;
        rev=rev*10+last;
        n/=10;
    }
    if (rev==temp){
        printf("\n%d is a palindrome number",temp);
    }
    else{
        printf("\n%d is not a palindrme number",temp);
    }
    return 0;
}
