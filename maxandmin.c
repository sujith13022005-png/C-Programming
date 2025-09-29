#include<stdio.h>
int main()
{
    int max ,min,n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    max=x;
    min=x;
    for(int i=1;i<=n;i++)
    {
       scanf("%d",&x);
       if(max<x)
        max==x;
       else if(min>x)
        min==x;
    }
    printf("max:",max);
    printf("min:",min);
    return 0;
}
