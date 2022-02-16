#include<stdio.h>
int main()
{
const int *p;
int *const q;
int n=10;
int j=20;
p=&j;
*q=20;
//...........ROD pointer..............
printf("%d\n",*(p++));
printf("%d\n",*(++p));
//printf("%d\n",++(*p));//ROD POINTER so cannot increment
//...........const pointer...........

//printf("%d\n",*p++);//error
printf("%d\n",++*q);
//printf("%d\n",*++p);//error because it cannot access another loc
printf("%d\n",++(*q));
printf("%d\n",(*q)++);
}
