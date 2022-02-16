#include<stdio.h>
int main()
{
int a[10];
int i;
printf("enter array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
a[i]='\0';

int *p;
p=a;
//..........through array..........
for(i=0;a[i];i++)
printf("%d\n",a[i]);
//..........through pointer........
for(i=0;p[i];i++)
printf("%d\n",*(p+i));
}
