#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,num;
	double result;
	start:
	if(i>5)
	 goto end;
	printf("Enter number %d:",i);
	scanf("%d",&num);
	if(num<0)
	printf("cannot calculate square root of a negative number.\n");
	else
	{
		result=sqrt(num);
		printf("square root of %d is%.2f\n ",num,result);
	}
	i++;
	goto start;
	end:
	return 0;
}
