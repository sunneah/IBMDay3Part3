#include<stdio.h>

void main()
{
	int arr[20],i,l,max,min;
	printf("Enter no.of elements");
	scanf("%d",&l);
	printf("Enter numbers");
	for(i=0;i<l;i++)
	{
		scanf("%d",&arr[i]);

	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<l;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	printf("Largest=%d\n",max );
	printf("Smallest=%d\n",min );
}
