#include<stdio.h>
int fib(int);
int main()
{
	int n;
	scanf("%d",&n);
	if(fib(n))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
int fib(int n)
{
	int a=0,b=1,c,flag=0;
	c=a+b;
	while(c<=n)
	{
		c=a+b;
		if(c==n)
		{
			flag=1;
			break;
		}
		a=b;
		b=c;
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}