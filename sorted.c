#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp;
	printf("Enter array size");
	scanf("%d",&n);
	printf("Enter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-i;i>=n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			temp=a[i];
			a[i]=a[j+1];
			a[j+1]=temp;
		}
	}
	printf("\n sorted array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		}
		return 0;	
}
output:Enter array size
2
Enter array values2
2

 sorted array is:22
