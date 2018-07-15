#include <stdio.h>
int main()
{
	int t1,t2,t3;
	scanf("%d %d %d",&t1, &t2, &t3);
	if(t1<t2)
	{
		if(t1<t3)
		{
			printf("%d",t1);
		}
		else
		{
			printf("%d",t3);
		}
	}
	else if (t1>t2)
	{
		if(t2>t3)
		{
			printf("%d",t3);
		}
		else
		{
			printf("%d",t2);
		}
	}
	return 0;
} 
