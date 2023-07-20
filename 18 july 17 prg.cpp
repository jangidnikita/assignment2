#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number");
	scanf("%d %d %d ",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is greater");
	}
	else
	{
		printf("a is not greater than b & c");
	}
	return 0;
}
