#include<stdio.h>
#define HALF 0.5
int main() {
double height;
double base;
double area;
printf("enter the base of the triangle");
scanf("%lf",&base);
printf("enter the height of the triangle");
scanf("%lf",&height);
area=HALF*base*height;
printf("area of the triangle is=%f",area);
return 0;
}
