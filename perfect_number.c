#include <stdio.h>

int main() {
    int number, i, sum;
    sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("The given number is either negative or very huge.\n");
        return 1;
    }

    // sum of proper divisors
    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum == number) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is not a Perfect Number.\n", number);
    }

    return 0;
}
