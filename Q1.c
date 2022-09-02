#include<stdio.h>
int main(){
    int num,unit;
    printf("Enter a number : ");
    scanf("%d",&num);
    unit = num%10;
    printf("Unit digit of %d = %d",num,unit);
    return 0;
}
