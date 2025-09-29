#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i-=2)
    {
        if(i%n==1)
        printf("%d ",i);
    }
    return 0;
}
