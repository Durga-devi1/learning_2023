#include<stdio.h>
int main()
{
	int a;
	printf("enter the roll number\n");
	scanf("%d",&a);
	char b;
	printf("enter the name\n");
	scanf("%s",&b);
	float c,d,e;
	printf("enter the physics marks\n");
	scanf("%f",&c);
	printf("enter the chemistry marks\n");
	scanf("%f",&d);
	printf("enter the maths marks\n");
	scanf("%f",&e);

	float total;
	total=c+d+e;
	printf(" total = %f\n",total);
	float percentage=(total/3);
	printf("percentage = %f\n",percentage);
	
}
