#include <stdio.h>
int main()
{
	int i,data[3];
	scanf("%d %d %d",&data[0],&data[1],&data[2]);
	for(i=0;i<3;i++)
	{
		if(data[i]%2==0) printf("even\n");
		else printf("odd\n");
	}
	return 0;
} 
