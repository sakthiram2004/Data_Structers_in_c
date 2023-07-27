#include<stdio.h>
main()
{
	int a[100],n,i,j,c;
	printf("Enter n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d Element:",i+1);
		scanf("%d",&a[i]);
	}
  for(i=0;i<n-1;i++)
   for(j=0;j<n-1-i;j++)
    if(a[j]>a[j+1])
    {
    	c=a[j];
    	a[j]=a[j+1];
    	a[j+1]=c;
	}
	for(i=0;i<n;i++)
	 printf("%d\n",a[i]);
}
