#include <stdio.h>
int main()
{
	int a1[100],k,n,tmp,i,j;
	printf("\nEnter the n value : ");
	scanf("%d",&n);
	printf("\nEnter the number of rotations : ");
	scanf("%d",&k);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}
	for(j=0;j<k;j++)
	{
	tmp=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=tmp;
	}
	printf("\nThe rotated array is ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a1[i]);
	}
	return 0;
}
 
