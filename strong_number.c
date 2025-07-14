#include <stdio.h>

int fact(int num){
    int factorial=1;
    for (int i = 1; i <= num; i++) {
        factorial*=i;
    }
    return factorial;
}
int main() {
    int number, i, sum, temp, l_digit;
    sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 0){
        printf("The given number not a positive integer or very huge.\n");
        return 1;
    }
    temp=number;

    while (temp>0){
        l_digit=temp%10;
        sum+=fact(l_digit);
        temp/=10;
    }
    
    if (sum == number) {
        printf("%d is a strong Number.\n", number);
    } else {
        printf("%d is not a strong Number.\n", number);
    }
    return 0;
}
