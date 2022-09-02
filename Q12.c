#include<stdio.h>
int main()
{
    float inr,dollar;
    printf("Enter amount in INR : ");
    scanf("%f",&inr);
    dollar = (1/76.23)*inr;
    printf("%.2f INR = %.2f dollar ",inr,dollar);
}
