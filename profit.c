#include<stdio.h>
main()
{
	int cp,sp,p,l;
	float perc;
	printf("enter the values of cp,sp");
	scanf("%d %d",&cp,&sp);
	if(sp>cp)
	{
		printf("profit\n");
		p = sp-cp;
		perc = p*100/cp;
		printf("%d\n", p);
		printf("%.2f", perc);
	}
	else if(cp>sp)
	{
		printf("Loss\n");
		l = cp-sp;
		perc=l*100/cp;
		printf("%d\n",l);
		printf("%.2f",perc);
	}
}
