#include<stdio.h>
int main()
{
double litres, cost, distance,re_litres;
printf("enter the remaining litres:");
scanf("%lf",&re_litres);
printf("enter the cost:");
scanf("%lf",&cost);
printf("enter the litres:");
scanf("%lf",&litres);
printf("enter the distance:");
scanf("%lf",&distance);
double total_cost_litres=re_litres+litres;
double milage=distance/total_cost_litres;
double total_cost_1km=cost/milage;
double total_cost=litres*cost;
printf("total cost:%.2lf",total_cost);
printf("\nmilage:%.2lf",milage);
printf("\ncost for 1km:%.2lf",total_cost_1km);
return 0;
}
