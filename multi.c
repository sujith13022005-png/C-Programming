#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       for(int r=1;r<=n;r++)
       {
            for(int c=1;c<=r;c++)
            {
             printf("%d",c);
            }
             printf("\n");
       }
       for(int k=1;k<=n;k++)
       {
           for(int l=1;l<=r-n*2;k++)
           {
              printf(" ");
           }

       }

       for(int r=1;r<=n;r++)
       {
            for(int c=1;c<=r;c++)
            {
             printf("%d",c);
            }
             printf("\n");
       }

    }

}
