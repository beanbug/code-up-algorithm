#include <stdio.h>
int main()
{
	char a='1';
	
	while(a!='q')
	{
		scanf("%c",&a);
		if(a != ' ')
			printf("%c\n",a);
	}
	return 0;
} 
