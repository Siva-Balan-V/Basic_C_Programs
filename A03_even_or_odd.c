#include <stdio.h>

int main() {
    int n;
    printf("Enter a integer:");
    scanf("%d",&n);
    if (n%2==0){
        printf("\n%d is a Even number.",n);
    }
    else{
        printf("\n%d is a Odd number.",n);
    }
    return 0;
}
