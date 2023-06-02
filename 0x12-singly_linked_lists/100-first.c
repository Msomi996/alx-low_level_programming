#include <stdio.h>

void initialise(void) __attribute__ ((constructor));

/**
 * initialise - prints a sentence before the main
 * function is executed
 */
void initialise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
