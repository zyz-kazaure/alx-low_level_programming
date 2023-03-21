#include <stdio.h>

/**
 * main - js
 * Desc: progra
 * numbers, starting with 1 and 2
 *
 * Return: sj
 */
int main(void)
{
	unsigned int prev, next, ans, sum;

	prev = 1;
	next = 1;
	ans = 0;
	sum = 0;
	while (ans < 4000000)
	{
		prev = next;
		next = ans;
		ans = prev + next;
		if ((ans % 2) == 0)
			sum = sum + ans;
	}
	printf("%u\n", sum);
	return (0);
}
