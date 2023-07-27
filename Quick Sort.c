#include<stdio.h>
void quicksort(int *,int,int);
main()
{
	int a[100],n,i,f,l;
	printf("Enter n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d ele:",i+1);
		scanf("%d",&a[i]);
	}
	f=0;
	l=n-1;
	quicksort(a,f,l);
	for(i=0;i<n;i++)
	 printf("%d\n",a[i]);
	return 0;
}
void quicksort(int *a,int f,int l)
{
	int i,j,p,c;
	if(f<l)
	{
		i=f;
		j=l;
		p=f;
		while(i<j)
		{
			while(a[i]<=a[p] && i<l)
			  i++;
			while(a[j]>a[p])
			 j--;
			if(i<j)
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
		c=a[p];
		a[p]=a[j];
		a[j]=c;
		quicksort(a,f,j-1);
		quicksort(a,j+1,l);
	}
}
