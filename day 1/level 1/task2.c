#include<stdio.h>
int main()
{
	int a;
	printf("enter the marks");
	scanf("%d",&a);
	if(a>=90&&a<=100)
	{
	    printf("grade A");
    }
    else if(a>=75&&a<=89)
    {
    	printf("grade B");
	}
	else if(a>=60&&a<=74)
    {
    	printf("grade c");
	}
	else if(a>=50&&a<=59)
    {
    	printf("grade d");
	}
    else if(a>=0&&a<=49)
    {
    	printf("grade f");
	}
}
	


