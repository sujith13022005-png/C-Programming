#include<stdio.h>
int main()
{
    int num,cnt=0;
    scanf("%d",&num);
    if(num==1)
    {
        printf("Neither prime not composite");
    }
    else if(num==2)
    {
       printf("only even prime number");
    }
  else
        {
        for(int i=1;i<=num;i++)
        {
        if(num%i == 0)
            cnt++;
        }
  if(cnt==2)
  printf("prime");
  else
   printf("not prime");
        }
    return 0;
}
/*
method-2
 if(num==1)
    {
        printf("Neither prime not composite");
    }
  else
        {
        for(int i=2;i<num;i++)
        {
        if(num%i == 0)
        {
    print("not prime")
    return 0;
        }
        }
        printf("prime")





     method-3
 if(num==1)
    {
        printf("Neither prime not composite");
    }
  else
        {
        for(int i=2;i<num/2;i++)
        {
        if(num%i == 0)
        {
    print("not prime")
    return 0;
        }
        }
        printf("prime")

*/
