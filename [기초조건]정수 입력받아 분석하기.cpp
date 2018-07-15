#include <stdio.h>
int main()
{
	int t1; 
	scanf("%d",&t1);
	if(t1>0) printf("plus\n");
	else printf("minus\n");
	if(t1 % 2 ==0) printf("even\n");
	else printf("odd\n");
	return 0;
} 
