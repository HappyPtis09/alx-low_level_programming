#include "lists.h"

/**
* pre_main - Print a line before the main function is executed.
*
* Return: Nothing
*/

void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
