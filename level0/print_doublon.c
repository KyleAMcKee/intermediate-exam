#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int count_a = 0;
	int count_b = 0;
	int first = 0;

	while (count_a < na && count_b < nb)
	{

		if (a[count_a] == b[count_b])
		{
			if (first == 0)
			{
				printf("%i", a[count_a]);
				first++;
			}
			else
				printf(" %i", a[count_a]);
			count_a++;
			count_b++;
		}
		else if (a[count_a] > b[count_b])
			count_b++;
		else
			count_a++;
	}
	printf("\n");
}


int main(void)
{
	int b = 11;
	int a = 8;
	int arr_b[11] = {-5, 2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000};
	int arr_a[8] = {2, 4, 5, 6, 7, 10, 40, 70000};

	print_doublon(arr_a, a, arr_b, b);
}
