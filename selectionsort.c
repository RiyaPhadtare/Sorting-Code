#include<stdio.h>
int main()
{
	int n,i,j,temp,min;
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
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}

	printf("\n After sorting=");
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
}

		
