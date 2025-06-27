#include <stdio.h>

int main() {
    float SI,p,r,t;
    printf("Enter the Principal amount :");
    scanf("%f",&p);
    printf("\nEnter the rate of interest :");
    scanf("%f",&r);
    printf("\nEnter the time period (in years) :");
    scanf("%f",&t);
    SI=((p*r*t)/100);
    printf("\nSimple interest :%.2f",SI);
    return 0;
}
