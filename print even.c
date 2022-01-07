#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d %d",&i,&n);
	for(i; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}