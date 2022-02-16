#include<stdio.h>
int main()
{
double n;
printf("%ld",(char*)(&n+1)-(char*)(&n));
}
