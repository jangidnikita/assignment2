#include<stdio.h>
int main()
{
	int h,e,s,m,cp;
	printf("enter 5 subjects number");
	scanf("%d %d %d %d %d",&h,&e,&s,&m,&cp);
	if(h>=40 && e>=40 && s>=40 && m>=40 && cp>=40)
    {
    	printf("you are pass");
	}
	else
	{
		printf("you are fail");
	}
	return 0;
}
