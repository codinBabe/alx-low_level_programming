#include <stdio.h>
#include <stdlib.h>
void print_int_array(int *a, int size)
{
	int i;
	i =0;
	while (i < size)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
int main(int ac, char **av)
{
	int *a;
	int asize;
	int i;

	if (ac < 2)
	{
		printf("Please give me at least one number\n");
		printf("Usage: %s number [NUMBER]\n", av[0]);
		return (1);
	}
	asize = ac - 1;
	a = malloc(asize * sizeof(int));
	i = 0;
	while (i < asize)
	{
		a[i] = atoi(av[i + 1]);
		i++;
	}
	print_int_array(a, asize);
	return (0);
}
