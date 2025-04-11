

#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}

int main()
{
	int a, b, result;
	a=1;
	b=2;
	int (*ptr)(int , int) = add;
	result = ptr(a,b);
	printf("%d", result);
	return 0;
}