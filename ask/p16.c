#include <stdio.h>
int main()
{
int m,n,i,j;
printf("Enter the number of rows and columns: ");
scanf("%d%d",&m,&n);
int matrix1[m][n], matrix2[m][n],diff[m][n];
printf("Enter elements of matrix 1:\n");
for(i=0;i<m;i++) 
{
for(j=0;j<n;j++) 
{
scanf("%d",&matrix1[i][j]);
}
}
printf("Enter elements of matrix 2:\n");
for(i=0;i<m;i++) 
{
for(j=0;j<n;j++) 
{
scanf("%d",&matrix2[i][j]);
}
}
for(i=0;i<m;i++) 
{
for(j=0;j<n;j++) 
{
diff[i][j]= matrix1[i][j]-matrix2[i][j];
}
}
printf("difference of the matrices:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++) 
{
printf("%d ",diff[i][j]);
}

printf("\n");
}
return 0;
}
