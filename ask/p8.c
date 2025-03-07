#include<stdio.h>
int main()
{
	int level,baseSalary,hra,da,grossSalary;
	printf("Enter the employee level (1, 2, or 3): \n");
	printf("1:Junior\n");
	printf("2:Mid-level\n");
	printf("3:Senior\n");
	scanf("%d",&level);
	switch(level)
	{
		case 1:
		baseSalary=20000;
		hra=0.2 * baseSalary;
		da=0.5 * baseSalary;
		break;

		case 2:
		baseSalary=40000;
		hra=0.25 * baseSalary;
		da=0.6 * baseSalary;
		break;

		case 3:
		baseSalary=60000;
		hra=0.3 * baseSalary;
		da=0.7 * baseSalary;
		default:
		printf("invalid level entered.\n");
		return 1;
	}
	grossSalary=baseSalary+hra+da;
	printf("Base salary: %d\n", baseSalary);
	printf("HRA: %d\n",hra);
	printf("DA: %d\n",da);
	printf("Gross Salary: %d\n", grossSalary);
	return 0;
}
