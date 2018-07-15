#include <stdio.h>
int main()
{
	char t1;
	scanf("%c",&t1);
	
	switch(t1)
	{
		case 'D':
			printf("slowly~");
			break;
		case 'C':
			printf("run!");
			break;
		case 'B':
			printf("good!!");
			break;
		case 'A':
			printf("best!!!");
			break;
		default:
			printf("what?");
			
	}
	return 0;
} 
