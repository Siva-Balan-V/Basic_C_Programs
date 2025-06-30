#include <stdio.h>
#include<stdbool.h>

int main() {
    int n,i;
    bool prime= true;
    printf("Enter a positive integer :");
    scanf("%d",&n);
    if (n<2){
        prime = false;
    }
    else{
        for (i=2;i<n;i++){
            if ((n%i)==0){
                prime=false;
                break;
            }
        }
        
    }
    if (prime==false){
        printf("\n%d is not a prime number",n);
    }
    else{
        printf("\n%d is a prime number",n);
    }
    return 0;
}
