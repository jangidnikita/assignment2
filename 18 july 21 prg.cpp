#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if((num%3==0)&&(num%7==0))
	{
		printf("number is divisible");
	}
	else
	{
		printf("nothing");
	}
	return 0;
}
