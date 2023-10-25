#include<stdio.h>
#include<math.h>
#define M_PI 3.14
int main()
{
double r, area,circ;
printf("enter the radius of the circle");
scanf("%lf" ,&r);
area=M_PI*r*r;
circ=M_PI*2*r;
printf("the area of a circle with radius %.3lf is %.3lf\n" ,r,area);
printf("the circumference of a circle with radius %.3lf is %.3lf" ,r,circ);
return 0;












}