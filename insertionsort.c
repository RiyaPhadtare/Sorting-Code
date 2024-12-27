#include<stdio.h>
int main()
{
	int i,j,swap,n;
	printf("\n Enter array size=");
	scanf("\n %d",&n);
	int arr[n];
	printf("\n Enter arrau elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			if(arr[j-1]>arr[j])
			{
				swap=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=swap;
			}
		}
	}
	printf("\n After sorting=");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
}
