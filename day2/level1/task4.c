#include<stdio.h>
int main()
{
	int arr[100];
	int n,i;
	int sum=0,count;
	printf("enter the total input numbers\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		while(arr[i]>0)
		{
			arr[i]=arr[i]&(arr[i]-1);
			count++;
		}
		sum=sum+count;
	}
	printf("sum is %d",sum);
}
