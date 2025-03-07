#include<stdio.h>
void calculate(int a, int b, int *sum, int *difference, int *product) 
{
*sum = a + b;
*difference = a - b;
*product = a * b;
}
int main() 
{
int num1, num2;
int sum, difference, product;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
calculate(num1, num2, &sum, &difference, &product);
printf("Sum: %d\n", sum);
printf("Difference: %d\n", difference);
printf("Product: %d\n", product);
return 0;
}
