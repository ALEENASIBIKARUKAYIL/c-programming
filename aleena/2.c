#include<stdio.h>
void main()
{
 int l,b,area,perimeter;
 printf("enter length and breadth:");
 scanf("%d%d",&l,&b);
 area=l*b;
 perimeter=2*l+b;
 printf("area of rectangle=%d",area);
 printf("perimeter of rectangle=%d",perimeter);
}
