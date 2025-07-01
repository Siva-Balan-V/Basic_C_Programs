#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("Enter number 1 :");
    scanf("%d",&n1);
    printf("\nEnter number 2 :");
    scanf("%d",&n2);
    printf("\nEnter number 3 :");
    scanf("%d",&n3);
    if ((n1>n2) & (n1>n3)){
        printf("\n%d is largest number",n1);
    }
    else if (n2>n3){
        printf("\n%d is largest number",n2);
    }
    else{
        printf("\n%d is largest number",n3);
    }
    return 0;
}
