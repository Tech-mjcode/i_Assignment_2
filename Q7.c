#include<stdio.h>
int main()
{
    int num,count=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(!(num&1))
    {
        num = num>>1;
        count++;
    }

    printf("First One from right hand side is %d ",count);
}
