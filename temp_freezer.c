#include<stdio.h>
#include<math.h>
int main()
{
double T;
double t;
printf("enter the value of time elapsed from power failure: ");
scanf("%lf", &t);
T=((4*t*t)/(t+2))-20;
printf("the temperature is %lf",T);
return 0;
}
