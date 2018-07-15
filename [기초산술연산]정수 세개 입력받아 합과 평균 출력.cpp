#include <stdio.h>
int main()
{
	int t1,t2,t3;
	scanf("%d %d %d",&t1,&t2,&t3);
	int sum=t1+t2+t3;
	float avg = (float)sum/3;
	printf("%d\n%.1f\n",sum,avg);
	return 0;
}
