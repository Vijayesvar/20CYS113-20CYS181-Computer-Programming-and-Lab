#include<stdio.h>
#include<math.h>
int main()
{
double V;
double t;
double i;
printf("enter the volume of input: ");
scanf("%lf", &V);
printf("enter the value of time in minutes: ");
scanf("%lf", &t);
t=t/60;
i=V/t;
printf("the infused rate is %lf ml/hr",i);
return 0;
}
