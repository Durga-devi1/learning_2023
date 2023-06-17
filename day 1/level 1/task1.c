#include<stdio.h>
void fun1(int,int);
void fun2(int,int);
void fun1(int a,int b)
{
	if(a>b)
	{
		printf("%d is bigger\n",a);
	}
	else
	{
		printf("%d is bigger\n",b);
	}
}
void fun2(int a,int b)
{
	(a>b)?	printf("%d is bigger\n",a):	printf("%d is bigger\n",b);
}
int main()
{
	int a,b;
	printf("enter the two numbers:\n");
	scanf("%d %d",&a,&b);
	fun1(a,b);
	fun2(a,b);
}
