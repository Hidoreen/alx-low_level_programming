#include <stdio.h>
#include <stdlib.h>
#include <libmy.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int num, digit, sum =0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit] != '\0'; digit+=)
		{
			if (!isdigit(argv[num][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
