#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	int arr[123] = {0};
	int first = 1;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				argv[1][i] = argv[1][i] + 32;
				arr[(int)argv[1][i]]++;
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
				arr[(int)argv[1][i]]++;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (arr[(int)argv[1][i]])
			{
				if (first == 1)
				{
					first  = 0;
					printf("%i%c", arr[(int)argv[1][i]], argv[1][i]);
				}
				else
					printf(", %i%c", arr[(int)argv[1][i]], argv[1][i]);
				arr[(int)argv[1][i]] = 0;
			}
			i++;
		}
	}
	printf("\n");
}
