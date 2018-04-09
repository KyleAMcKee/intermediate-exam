#include <stdio.h>

int     count_of_2(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        int temp = i;
        while (temp)
        {
            if (temp % 10 == 2)
                count++;
            temp /= 10;
        }
    }
    return (count);
}

int main(void)
{
    int a = 25;
    int b = 2022;

    printf("%i: %i\n", a, count_of_2(a));
    printf("%i: %i\n", b, count_of_2(b));
}