#include<stdio.h>
int main()
{
    int num,digit,final_num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter a digit : ");
    scanf("%d",&digit);
    final_num = num*10+digit;
    printf("%d becomes %d ",num,final_num);
    return 0;
}
