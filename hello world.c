#include<stdio.h>
int main()
{
int r;
float pie,area;
printf("please enter radius=");
scanf("%d",&r);
printf("\nplease enter value of pie=");
scanf("%f",&pie);
printf("\nplease enter value for area=");
pie=22/7;
area=pie*r*r;
printf("area of circle=%f",area);
return 0;
}