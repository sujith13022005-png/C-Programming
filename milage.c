#include<stdio.h>
int main()
{
double litres;
double cost, distance;
printf("enter the litres:");
scanf("%lf",&litres);
printf("enter the cost:");
scanf("%lf",&cost);
printf("enter the distance:");
scanf("%lf",&distance);
double milage=distance/litres;
double totalcost1km=cost/milage;
printf("milage:%.2lf",milage);
printf("\ncost for 1km:%.2lf",totalcost1km);
return 0;
}
