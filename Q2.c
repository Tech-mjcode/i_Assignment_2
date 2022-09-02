#include<stdio.h>
int main(){
    int num,digit;
    printf("Enter a number : ");
    scanf("%d",&num);
    digit = num/10;
    printf("Without last digit of %d is %d ",num,digit);
    return 0;
    }
