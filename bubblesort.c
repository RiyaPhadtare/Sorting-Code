#include<stdio.h>
int main()
{
	int i=0,j=0,swap,n;
	printf("\n Enter array size=");
	scanf("%d",&n);
	int arr[n];
	printf("\n Enter array elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
			}
		}
	}
	printf("\n After sorting=");
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
}

