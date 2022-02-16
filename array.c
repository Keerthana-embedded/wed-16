#include<stdio.h>
int main()
{
char a[10];
char b[10];
int i;
//...........................charector array......................
printf("enter array\n");
for(i=0;i<10;i++)
{
scanf("%c",&a[i]);
}
a[i]='\0';
for(i=0;i<10;i++)
printf("%c",a[i]);
printf("\n");
//..........................string array...........................
puts("enter string");
fgets(b,10,stdin);
puts(b);
}
