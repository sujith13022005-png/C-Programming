#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int r=n;r>=1;r--){
        for (int c=1;c<=r;c++)
            printf(" ");
         for (int c=0;c<=(n-r)*2;c++)
         printf("*");
          printf("\n");
    }
    return 0;
}
