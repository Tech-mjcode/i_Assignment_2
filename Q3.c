#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two Numbers : ");
    scanf("%d %d",&a,&b);
    printf("Before swapping a = %d and b = %d ",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping a = %d and b = %d ",a,b);
    return 0;
}
