#include<stdio.h>
#include<ctype.h>
int main()
{
char str[10];
printf("Enter a string in lowercase:");
fgets(str,sizeof(str),stdin);
for(int i=0;str[i]!='\0';i++)
{
str[i]=toupper(str[i]);
}
printf("string in uppercase:%s\n",str);
return 0;
}
