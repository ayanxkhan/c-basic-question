#include<stdio.h>
int sum(int i,int j)
{
	return i+j;
}

int main()
{
	int a=20,b=30,c;
	c=sum(a,b);
	printf("Sum is %d\n",c);
	return 0;
}