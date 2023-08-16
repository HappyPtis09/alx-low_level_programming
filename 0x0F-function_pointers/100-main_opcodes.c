#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes)
{
	void (*main_ptr)() = &main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02hhx ", *((char*)main_ptr + i));
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (90);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (100);
	}
	print_opcodes(num_bytes);

	return 0;
}
