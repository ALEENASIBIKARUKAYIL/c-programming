#include <stdio.h>
#include <string.h>
void reverseString(char*str)
{
int len=strlen(str);
for(int i=0;i<len/2;i++)
{char temp=str[i];
str[i]=str[len-i-1];
str[len-i-1]=temp;
}
}

int main()
{
char str1[100], str2[100];
int choice;
printf("Choose an operation:\n");
printf("1. Concatenate\n");
printf("2. Compare\n");
printf("3. Length\n");
printf("4. Reverse String\n");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Enter first string: ");
scanf("%[^\n]", str1);
printf("Enter second string: ");
scanf("%s", str2);
strcat(str1, str2);
printf("Concatenated string: %s\n", str1);
break;
case 2:
printf("Enter first string: ");
scanf("%[^\n]", str1);
printf("Enter second string: ");
scanf("%s", str2);
if (strcmp(str1, str2) == 0) 
{
printf("Strings are equal.\n");
} else {
printf("Strings are not equal.\n");
}
break;
case 3:
printf("Enter a string: ");
scanf("%[^\n]", str1);
printf("Length of the string: %zu\n",
strlen(str1));
break;
case 4:
printf("Enter a string: ");
scanf("%[^\n]", str1);
reverseString(str1);
printf("Reversed string: %s\n", str1);
break;
default:
printf("Invalid choice.\n");
}
return 0;
}
