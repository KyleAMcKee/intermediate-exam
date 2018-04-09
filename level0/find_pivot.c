#include <stdio.h>

int	find_pivot(int *arr, int n)
{
	int sum = 0;
	int left = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	for (int i = 0; i < n; i++)
	{
		if (left == sum - left - arr[i])
			return (i);
		left += arr[i];
	}
	return (-1);
}
