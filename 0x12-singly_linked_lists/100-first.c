#include <stdio.h>
/**
 * firstmain - function before main
 * Return: rien
*/

void __attribute__ ((constructor)) firstmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
