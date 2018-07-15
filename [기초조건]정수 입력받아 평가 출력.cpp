#include <stdio.h>
int main()
{
	int t1; 
	scanf("%d",&t1);
	if (90 <= t1) printf("A"); 
	else if (70<=t1) printf("B");
	else if (40<=t1) printf("C");
	else printf("D");
	return 0;
} 
