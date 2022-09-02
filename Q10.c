#include<stdio.h>
int main()
{
    int num,w_last,fi;
    printf("Enter a number : ");
    scanf("%d",&num);
    w_last = num/10;
    fi = w_last*10;
    printf("%d become %d ",num,fi);
    return 0;

}
