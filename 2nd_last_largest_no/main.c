
#include <stdio.h>
#include <limits.h>

int main()
{
	int arry[5] = {3, -5, 6, 78, 4};
	int first;
	int i;
	first = arry[0];
	for(i=1; i<5; i++)
	{
		if(arry[i] > first)
		{
			first = arry[i];
		}

	}
	printf("biggest number is %d\n", first);
	int second = INT_MIN;

	for(i=0; i<5; i++)
	{
		if((first != arry[i]) && (arry[i] > second))
		{
			second = arry[i];
		}
	}
	printf("2nd last biggest number is %d", second);

	return 0;
}