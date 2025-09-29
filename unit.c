//program to calculate TNEB bill
#include<stdio.h>
int main()
{
int unit ;
double bill_amount;
printf("Enter the unit:");
scanf("%i",&unit);
if(unit<=100)
{
printf(" %d:unit is free",unit);
}
else if(unit<=200)
{
bill_amount=(unit-100)*2.25;
printf("Bill amount Rs.%.2lf",bill_amount);
}
else if(unit<=400)
{
bill_amount=225+(unit-200)*4.5;
printf("Bill amount Rs.%.2lf",bill_amount);
}
else if(unit<=500)
{
bill_amount=1125+(unit-400)*6;
printf("Bill amount Rs.%.2lf",bill_amount);
}
else
{
bill_amount=1125+600+(unit-500)*8;
printf("Bill amount Rs.%.2lf",bill_amount);
}
return 0;
}
