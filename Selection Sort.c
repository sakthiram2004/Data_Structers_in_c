#include<stdio.h>
main()
{
	int a[100],n,i,j,c,min;
	printf("Enter n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d Element:",i+1);
		scanf("%d",&a[i]);
	}
for(i=0;i<n-1;i++)
{
	min=i;
	for(j=i+1;j<n;j++)
	 if(a[j]<a[min])
	  min=j;
	if(min!=i)
	{
		c=a[i];
		a[i]=a[min];
		a[min]=c;
	}
}
for(i=0;i<n;i++)
 printf("%d\n",a[i]);
}
