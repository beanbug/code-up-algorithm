#include <stdio.h>
int main()
{
	int i, sum = 0;
	int a;
		
	scanf("%d",&a);
	for(i=1;;i++)
	{
		sum+=i;
		if(sum>=a) break;
	}
	printf("%d",i);
	return 0;
} 
