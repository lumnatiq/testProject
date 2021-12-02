#include <stdio.h>
#include <string.h>

int main()
{
	char name[10];
	scanf("%s", name);
	printf("Hello, %s! Nice to see you\n", name);

	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}
