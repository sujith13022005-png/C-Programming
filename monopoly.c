#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=0 && x<=100)
   printf("%d",x%3==0?:3-x%3);
    else
        printf("invalid score");
    return 0;

}
