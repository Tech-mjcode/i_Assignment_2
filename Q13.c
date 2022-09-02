#include<stdio.h>
int main()
{
    int num,u_d,w_u_d,f_num;
    printf("Enter a number : ");
    scanf("%d",&num);
    u_d = num%10;
    w_u_d = num/10;
    f_num = u_d*100+w_u_d;
    printf("%d becomes %d",num,f_num);
    return 0;


}
