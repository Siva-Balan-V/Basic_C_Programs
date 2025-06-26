#include <stdio.h>

int main() {
    int n1,n2;
    printf("Enter number 1 :");
    scanf("%d",&n1);
    printf("\nEnter number 2 :");
    scanf("%d",&n2);
    if (n1>n2){
        printf("\n%d is largest number",n1);
    }
    else{
        printf("\n%d is largest number",n2);
    }
    return 0;
}
