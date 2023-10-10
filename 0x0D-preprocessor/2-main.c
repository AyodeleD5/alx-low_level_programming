#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of file it was compiled from
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%s",__FILE__);

	return (0);
}
