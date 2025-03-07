#include <stdio.h>
int main()
{
int m,n,p,i,j,k;
printf("Enter the number of rows and columns for the first matrix: ");
scanf("%d%d",&m,&n);
printf("Enter the number of rows and columns for the second matrix: ");
scanf("%d%d",&n,&p);
int matrix1[m][n], matrix2[n][p], product[m][p];
printf("Enter elements of matrix 1:\n");
for(i=0;i<m;i++) 
{
for(j=0;j<n;j++) 
{
scanf("%d",&matrix1[i][j]);
}
}
printf("Enter elements of matrix 2:\n");
for(i=0;i<n;i++) 
{
for(j=0;j<p;j++) 
{
scanf("%d",&matrix2[i][j]);
}
}
for(i=0;i<m;i++) 
{
for(j=0;j<p;j++) 
{
product[i][j] = 0;
for(k=0;k<n;k++) {
product[i][j] += matrix1[i][k] *
matrix2[k][j];
}
}
}
printf("Product of the matrices:\n");
for(i=0;i<m;i++)
{
for(j=0;j<p;j++) 
{
printf("%d ",product[i][j]);
}
printf("\n");
}

return 0;
}
