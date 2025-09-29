#include<stdio.h>
int main()
{
int p=0,c=1,num;
int stor;
scanf("%d",&num);
printf("%d %d ",p,c);
for(int i=1;i<=num-2;i++)
{
    stor=p+c;
    p=c;
    c=stor;
    printf("%d ",stor);
}
return 0;
}
