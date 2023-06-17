#include<stdio.h>
int operation(int ,int );
int operation(int a ,int type )
{
	switch(type)
	{
		case 1:
			
			return (a | (1 << (0)));
			break;
			
		case 2:
			return (a & (~(1 << (31 - 1))));
			break;
	
		case 3:
			return (a^ (1 << (16- 1)));
			break;
		default:
			return 0;
	}
}
int main()
{
	int a,type;
	printf("enter the number\n");
	scanf("%d",&a);
	printf("enter the operation type\n");
	scanf("%d",&type);
    int result=	operation(a,type);
    printf(" result is %d",result);
	
	
}
