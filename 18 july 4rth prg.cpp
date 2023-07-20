#include<stdio.h>
int main()
{
	int h,e,m,s,c,average;
	printf("enter 5 subjects numbers");
	scanf("%d %d %d %d %d",&h,&e,&m,&s,&c);
	if(h>=40 && e>=40 && m>=40 && s>=40 && c>=40)
	{
		average=(h+e+m+s+c)/5;
		printf("average=%d",average);
	}
	else
	{
		printf("fail");
	}
	return 0;	
}
