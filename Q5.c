#include<stdio.h>
int main(){
    int num,unit_digit,w_unit,ten_digit,hundread_digit,sum;
    printf("Enter a Three digit number : ");
    scanf("%d",&num);
    unit_digit = num%10;
    w_unit = num/10;
    ten_digit = w_unit%10;
    hundread_digit = w_unit/10;
    sum = unit_digit+ten_digit+hundread_digit;
    printf("Sum of digit of %d = %d",num,sum);
    return 0;
}
