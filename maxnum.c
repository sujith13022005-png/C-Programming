#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("%d is greater",num1>num2?num1:num2);
    //or
   /* if(num1>num2)
        printf("num1 is greater: %d",num1);
    else
        printf("num2 is greater: %d",num2);*/
return 0;
}
