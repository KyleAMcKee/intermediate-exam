#include <stdio.h>
#include <string.h>

int is_anagram(char *a, char *b)
{
	int a_arr[127];
	int b_arr[127];
	int i = 0;

	memset(a_arr, 0, sizeof(a_arr));
	memset(b_arr, 0, sizeof(b_arr));

	while(a[i])
	{
		a_arr[(int)a[i]]++;
		i++;
	}

	i = 0;
	while (b[i])
	{
		b_arr[(int)b[i]]++;
		i++;
	}

	for (int i = 32; i < 127; i++)
	{
		if (a_arr[i] != b_arr[i])
			return (0);
	}
	return (1);
}

int main (int argc, char **argv)
{
	(void)argc;
	printf("result: %i\n", is_anagram(argv[1], argv[2]));
}

