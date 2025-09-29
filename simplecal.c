#include<stdio.h>
int main()
{
    int num1,num2,ch,sum;
       while(1){
    printf("\n1.Addition:");
    printf("\n2.Subraction:");
    printf("\n3.Multiplication:");
    printf("\n4.Division:");
    printf("\n5.Remainder:");
    printf("\n6.exit:");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    if(ch==6)
    {
        printf("exit");
    }
    else if(ch>=1 && ch<=5)
    {
    switch(ch)
{
    case 1:
        printf("1.Addition.");
        printf("\nAddition number one :");
        scanf("%d",&num1);
        printf("Addition number two:");
        scanf("%d",&num2);
        sum=num1+num2;
        printf("%d + %d = %d",num1,num2,sum);
        break;
    case 2:
         printf("2.Subraction.");
        printf("\nSubraction: number one :");
        scanf("%d",&num1);
        printf("Subraction: number two:");
        scanf("%d",&num2);
        sum=num1-num2;
        printf("%d - %d = %d",num1,num2,sum);
        break;
    case 3:
        printf("3.Multiplication.");
        printf("\nMultiplication number one :");
        scanf("%d",&num1);
        printf("Multiplication number two:");
        scanf("%d",&num2);
        sum=num1*num2;
        printf("%d * %d = %d",num1,num2,sum);
        break;
    case 4:
        if(num2==0)
        {
            printf("division cannot br zero");
            break;
        }
      printf("4.Division.");
        printf("\nDivision number one :");
        scanf("%d",&num1);
        printf("Division number two:");
        scanf("%d",&num2);
        sum=num1/num2;
        printf("%d / %.slf = %d",num1,num2,(double)sum);
        break;
    case 5:
        printf("5.Remainder.");
        printf("\nRemainder number one :");
        scanf("%d",&num1);
        printf("Remainder number two:");
        scanf("%d",&num2);
        sum=num1%num2;
        printf("%d %% %d = %d",num1,num2,sum);
        break;
    case 6:
        printf("\n6.exit.");
        break;
}
}
    }
    return 0;
}
