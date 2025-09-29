#include<stdio.h>
int main()
{
    int n,rev=0,num,rem;
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;//logic
        num=num/10;
    }
    if(n==rev)
        printf("polin");
        else
        printf("not polin");
    return 0;
}
