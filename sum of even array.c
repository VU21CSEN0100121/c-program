#include<stdio.h>
int main()
{
	int a[20],i,n,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		s+=a[i];
	}
	printf("%d",s);
}
