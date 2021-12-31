#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the values of a,b,c,d");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>=35 && b>=35 && c>=35 && d>=35)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	
}
