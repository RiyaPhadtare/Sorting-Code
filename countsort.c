#include<stdio.h>
int main()
{
	int n,j=0,i=0,count=0,max;
	printf("\n Enter array size=");
	scanf("%d",&n);
	int input_array[n];
	printf("\n Enter array elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d \t",&input_array[i]);
	}
	max=input_array[0];
	for(i=0;i<n;i++)
	{
		if(max<input_array[i])
		{
			max=input_array[i];
		}
	}
	printf("\n Max is %d",max);
	int count_array[max+1];
	for(i=0;i<max+1;i++)
	{
		count_array[i]=0;
	}
	printf("\n Count Array");
	for(i=0;i<max+1;i++)
	{
		printf("\t %d",count_array);
	}
	for(j=0;j<=max;j++)
	{
		count=0;
		for(i=0;i<n;i++)
		{
			if(input_array[i]==j)
			{
				count++;
			}
		}
		count_array[j]=count;
	}
	printf("\n Count Array");
	for(i=0;i<max+1;i++)
	{
		printf("\t %d",count_array[i]);
	}
}

