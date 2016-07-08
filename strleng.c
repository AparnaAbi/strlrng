# strlrng
#include<stdio.h>
void main()
{
char a[100];
int b,c=0;
printf("enter the string");
scanf("%s",a);
for(i=0;;i++)
{
  if(a[i]==' ')
  c++;
}
b=strlen(a);
printf("the length %d",c);
}
