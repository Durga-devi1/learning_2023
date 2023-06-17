#include<stdio.h>
int main()
{
	int arr[100];
	int n,i;
	int sum=0;
	printf("enter the total input numbers\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i=i+2)
	{
		sum=sum+arr[i];
	}
	printf("%d is the sum of alterante numbers",sum);
}
