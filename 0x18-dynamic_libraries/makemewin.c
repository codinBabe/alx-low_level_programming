#include <unistd.h>
#include <string.h>

int rand()
{
	static int a = -1;

	a++;
	if (a == 0)
		return 8;
	if (a == 1)
		return 8;
	if (a == 2)
		return 7;
	if (a == 3)
		return 9;
	if (a == 4)
		return 23;
	if (a == 5)
		return 74;
	return a * a % 30000;
}
