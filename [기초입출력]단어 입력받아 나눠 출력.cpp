#include <stdio.h>
int main()
{
	char data[21];
	scanf("%s",data);
	for(int i=0;i<21;i++)
	{
			if(data[i] == NULL) break;
			printf("\'%c\'\n",data[i]);
	} 
	 return 0;
}
