#include<stdio.h>
int main()
{
    int num,cnt=0;
    scanf("%d",&num);

        for(int i=1;i<=num;i++)
        {
        if(num%i == 0)
            cnt++;
        }

    return 0;
}
