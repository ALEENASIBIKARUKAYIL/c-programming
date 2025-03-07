#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,z,w,result;
	printf("Enter value for x:");
	scanf("%lf",&x);
	printf("Enter value for y:");
	scanf("%lf",&y);
	printf("Enter value for z:");
	scanf("%lf",&z);
	printf("Enter value for w:");
	scanf("%lf",&w);
	result=(pow(x+y,2)*(x+z))/w;
	printf("The result is : %.2lf\n",result);
	return 0;
}
