#include<stdio.h>
void main()
{
	int n=1,a;
	scanf("%d",&a);
	while(a>=n)
	{
		if(a%n==0)
		{
			printf("%d ",n);
		}
		n++;
	}
}