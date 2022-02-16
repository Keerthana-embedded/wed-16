
#include<stdio.h>
int * sum(int ,int );
int sum1(int, int);
int main()
{
int *p,a,b;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
p=sum(a,b);
int (*func)(int,int);
func=sum1;
printf("%d\n",*p);
printf("%d\n",func(a,b));
}
//......................pointer to function....................
int * sum(int a,int b)
{
	int *p,c;
        c=a+b;
	p=&c;
	return p;
}
//......................function pointer.......................
int sum1(int a,int b)
{
	int c;
        c=a+b;
	return c;
}
