#include <stdio.h>

int main(void) 
{
	for (int i = 1; i < 1001; i++) 
	{
		printf("%d", getpid());
		printf("-%d\n", i);
	}
	return 0;
}